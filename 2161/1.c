#include <stdio.h>
#include <stdlib.h>
typedef int element;
//0)노드 구조체 작성
typedef struct Node{
	element data;
	struct Node* next;
}Node;

void insertFirst(Node* head, element data){
	Node* node = (Node*)malloc(sizeof(Node));//새노드 동적할당
	node->data = data;//
	if (head == NULL){//리스트에 노드가 없는경우
		head = node; //새로운 노드주소값
		head->next = head;//자신을 순환참조
	}
	else{
		node->next = head->next;//원래 리스트의 첫위치값
		head->next = node;//새로운 노드 주소값
	}
	 return head;
}
Node* insertLast(Node* head, element data){
	Node* node = (Node*)malloc(sizeof(Node));//새노드 동적할당
	node->data =data;
	if (head == NULL){
		head = node; //새로운 노드주소값
		head->next=head; //자신을 순환참조
	}
	else{
		node->next = head->next;//리스트의 첫 위치
		head->next = node;//새노드 주소
		head = node;//새로운 head 주소 리턴
	}
	return head;
}

Node* chageCard(Node* head){//120
	Node* removed = head->next; //60 노드삭제위치 저장
  //head->next = removed->next; //삭제된 다음 위치와 연결
	head->next = head->next->next;
	printf("%d ",removed->data);
	free(removed);
	return head->next;// 새로운 헤드값으로 리턴
}

int main() {
	Node *head =NULL, *p;
	int n  ;
	//printf("카드개수 입력\n");
 	scanf("%d",&n);
//	printf("마지막위치에 연결\n");
	for(int i = 1;i <= n;i++){
		head =  insertLast(head, i);//노드 삽입함수 호출
	}
//	printf("head노드 = %d\n",head->data);
	while(head->next != head){
		head = chageCard(head);//카드 제거함수 호출
		//printList(head);
	}
	 printf("%d",head->data);
	return 0;
}
