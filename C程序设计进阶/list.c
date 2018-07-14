#include "nude.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct list {
	Node* head;
	//Node* tail;
}List;

void append(List* plist, int number){
	Node* p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	Node* last = plist->head;
	
	if (last){
		while (last->next){
			last = last->next;
		}
		last->next = p;
	}
	else {
		plist->head = p;
	}
}

void print_list(const List* plist){
	Node* p;
	for (p=plist->head;p;p=p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}

int search_list(const List* plist, int num){
	Node* p;
	int isfound = 0;
	
	for (p=plist->head;p;p=p->next){
		if (p->value==num){
			printf("Found\n");
			isfound = 1;
			break;
		}
	}
	if (isfound == 0){
		printf("Not Found\n");
	}
	return isfound;
}

int delete_list(List* plist, int num){
	Node* p;
	Node* q;
	int isfound = 0;
	
	for (q=NULL,p=plist->head;p;q = p,p=p->next){
		if (p->value==num){
			if (q==NULL){
				plist->head = plist->head->next;
				free(p);
				free(q);
				isfound = 1;
				break;
			}
			q->next = p->next;
			free(p);
			isfound = 1;
			break;
		}
	}
	if (isfound == 0){
		printf("Not Found\n");
	}
	return isfound;
}

void clear_list(List* plist){
	Node* p = plist->head;
	Node* q;
	while (p!=NULL){
		q = p->next;
		free(p);
		p = q;
	}
}

int main(int argc, const char* argv[]){
	List list;
	list.head = NULL;
	int number;
	do {
		scanf("%d",&number);
		if (number!=0){
			append(&list, number);
		}
	} while (number != 0);
	
	print_list(&list);
	
	search_list(&list,1);
	
	delete_list(&list,1);
	
	print_list(&list);
	
	clear_list(&list);
	
	return 0;
}

