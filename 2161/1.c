#include <stdio.h>
#include <stdlib.h>
typedef int element;
//0)��� ����ü �ۼ�
typedef struct Node{
	element data;
	struct Node* next;
}Node;

void insertFirst(Node* head, element data){
	Node* node = (Node*)malloc(sizeof(Node));//����� �����Ҵ�
	node->data = data;//
	if (head == NULL){//����Ʈ�� ��尡 ���°��
		head = node; //���ο� ����ּҰ�
		head->next = head;//�ڽ��� ��ȯ����
	}
	else{
		node->next = head->next;//���� ����Ʈ�� ù��ġ��
		head->next = node;//���ο� ��� �ּҰ�
	}
	 return head;
}
Node* insertLast(Node* head, element data){
	Node* node = (Node*)malloc(sizeof(Node));//����� �����Ҵ�
	node->data =data;
	if (head == NULL){
		head = node; //���ο� ����ּҰ�
		head->next=head; //�ڽ��� ��ȯ����
	}
	else{
		node->next = head->next;//����Ʈ�� ù ��ġ
		head->next = node;//����� �ּ�
		head = node;//���ο� head �ּ� ����
	}
	return head;
}

Node* chageCard(Node* head){//120
	Node* removed = head->next; //60 ��������ġ ����
  //head->next = removed->next; //������ ���� ��ġ�� ����
	head->next = head->next->next;
	printf("%d ",removed->data);
	free(removed);
	return head->next;// ���ο� ��尪���� ����
}

int main() {
	Node *head =NULL, *p;
	int n  ;
	//printf("ī�尳�� �Է�\n");
 	scanf("%d",&n);
//	printf("��������ġ�� ����\n");
	for(int i = 1;i <= n;i++){
		head =  insertLast(head, i);//��� �����Լ� ȣ��
	}
//	printf("head��� = %d\n",head->data);
	while(head->next != head){
		head = chageCard(head);//ī�� �����Լ� ȣ��
		//printList(head);
	}
	 printf("%d",head->data);
	return 0;
}
