/*
 * address_book.c
 *
 *  Created on: Nov 20, 2014
 *      Author: mgdaily
 */

#include<stdio.h>

int total = 0;

void add() {
    printf("Enter Last Name, First Name, email address, phone separated by commas.\n");
	pNode pNewNode; //new node pointer
	pNode pTemp; //for adding in-between nodes
	int count = 0;
	int index;
	char first[256];
	char last[256];
	char email[256];
	char phone[256];

	pCurNode = pFirstNode; //pCurNode is used to step through list.
	pNewNode = malloc(sizeof(Node)); //allocate memory for new node.

	//populate new node (pNewNode)

	scanf("%d\n", &index);
	scanf("%256[^,],%256[^,],%256[^,],%256s", last, first, email, phone);

	strcpy(pNewNode->lastName, last);
	strcpy(pNewNode->firstName, first);
	strcpy(pNewNode->eMail, email);
	strcpy(pNewNode->phone, phone);

	//if list is empty. only runs once.

	if (pFirstNode == NULL) { //beginning condition
		pFirstNode = pNewNode; //set the first node to the new populated node
		pFirstNode->pNext = NULL; //set the first node's next pointer to null (only one node at this time)
	}

	//if list is populated

	//this block will step pCurNode through list to specified index.

	else {
		while (count < index) {
			if (count == index - 1)
				pTemp = pCurNode;
			pCurNode = pCurNode->pNext;
			count++;
		}

		//insert new node at beginning of list, and change that new node to be the firstNode

		if (pCurNode == pFirstNode) {
			pNewNode->pNext = pFirstNode;
			pFirstNode = pNewNode;
			pCurNode = pFirstNode;
		}

		//insert new node between two existing nodes

		else {
			pTemp->pNext = pNewNode;
			pNewNode->pNext = pCurNode;
			pCurNode = pFirstNode;

		}

	}

	total++;

	//test();

	//free(pNewNode);

}

void delete() {

    printf("Enter index of entry that you would like to delete.\n");

	pNode pTemp; //for deleting in-between nodes
	int index;
	int count = 0;
	scanf("%d\n", &index);

    //steps cursor to specified index for deletion

	if (index <= (total - 1)) {

		pCurNode = pFirstNode;

		while (count < index) {
			if (count == index - 1)
				pTemp = pCurNode;
			pCurNode = pCurNode->pNext;
			count++;
		}
		//if deleting first node
		if (pCurNode == pFirstNode) {
			pFirstNode = pFirstNode->pNext;
			free(pCurNode);
		}

		//if deleting a node in-between other nodes

		else {

			pTemp->pNext = pCurNode->pNext;
			pCurNode->pNext = NULL;
			free(pCurNode);
		}

	}

	total--;

}

void getContact() {

    printf("Enter index of contact that you would like to retrieve.\n");

	pCurNode = pFirstNode;
	int index;
	int count = 0;

	scanf("%d", &index);

	while (count < index) {
		pCurNode = pCurNode->pNext;
		count++;
	}

	print(pCurNode);

}

void getField() {

    printf("First, enter index of contact you are interested in. Then, type 'f' to retrieve first name, 'l' to retrieve last name, 'e' to retrieve e-mail, or 'p' to retrieve phone number.\n");
	int count = 0;
	int index;
	char field[20];
	memset(field, '\0', sizeof(field));
	pNode pCurNode = pFirstNode;

	scanf("%d", &index);
	scanf("%s", &field);

	while (count < index) {
		pCurNode = pCurNode->pNext;
		count++;
	}

	switch (field[0]) {
	case 'f':
		printf("%s\n", pCurNode->firstName);
		break;
	case 'l':
		printf("%s\n", pCurNode->lastName);
		break;
	case 'e':
		printf("%s\n", pCurNode->eMail);
		break;
	case 'p':
		printf("%s\n", pCurNode->phone);
		break;
	}

}

void getCount() {
	printf("%d\n", total);
}

void loadFile() {

	FILE *fp;
	int count;
	char fileName[256];
	pCurNode = pFirstNode;
	pNode pNewNode;
	pNode pTemp = NULL;
	char last[256];
	char first[256];
	char email[256];
	char phone[256];
	char firstLine[1030];

    //get file name from input stream, and handle non-existent file name error

	scanf("%s", &fileName);
	fp = fopen(fileName, "r");
	if (fp == NULL)
		printf("Input file not found.");

	fgets(firstLine, 1030, fp); //gets the first line of the file

	while (!feof(fp)) {

		count = 0;
		pNewNode = malloc(sizeof(Node));

		if (pNewNode) {

			fscanf(fp, " %256[^,],%256[^,],%256[^,],%256s ", last, first, email,
					phone);

			strcpy(pNewNode->lastName, last);
			strcpy(pNewNode->firstName, first);
			strcpy(pNewNode->eMail, email);
			strcpy(pNewNode->phone, phone);

			//if list is empty

			if (pFirstNode == NULL) {
				pFirstNode = pNewNode;
				pCurNode = pFirstNode;
				total++;
			}

			//if list is populated

			else {

				pCurNode->pNext = pNewNode;
				pCurNode = pNewNode;
				total++;

			}
		}

	}

	pCurNode = pFirstNode;
	pclose(fp);
}

void saveFile() {

	FILE* fp;
	pNode pCurNode = pFirstNode;
	char fileName[256];

	scanf("%s", &fileName);
	fp = fopen(fileName, "w");

	fprintf(fp, "lastName,firstName,email,phoneNumber\n");

	while (pCurNode != NULL) {
		fprintf(fp, "%s,", pCurNode->lastName);
		fprintf(fp, "%s,", pCurNode->firstName);
		fprintf(fp, "%s,", pCurNode->eMail);
		fprintf(fp, "%s\n", pCurNode->phone);
		pCurNode = pCurNode->pNext;
	}

	fclose(fp);
}

//test method steps through list and prints all entries (used for testing of final program)

void test() {

	if (pFirstNode == NULL) {
		printf("List is empty.\n");
	} else {
		pCurNode = pFirstNode;
		while (pCurNode != NULL) {
			printf("[%s, %s, %s, %s] -> ", pCurNode->lastName,
					pCurNode->firstName, pCurNode->eMail, pCurNode->phone);
			pCurNode = pCurNode->pNext;
		}
	}

}

//print node's contents to output stream

void print(pNode thisnode) {
	if (thisnode == NULL) {
		printf("This node is null\n");
	} else {
		printf("%s,%s,%s,%s\n", thisnode->lastName, thisnode->firstName,
				thisnode->eMail, thisnode->phone);
	}
}
