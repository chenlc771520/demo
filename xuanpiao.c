#include <stdio.h>
#include <string.h>

struct XuanMin
{
	char name[32];
	int tickets;
};

int main()
{
	struct XuanMin xm[3];
	struct XuanMin max;
	
	int feiPiao = 0;
	int i;
	int len;
	int j;
	int mark = 0;
	
	int total = 5;
	char tmpName[32];
	
	//��ʼ��ѡ����Ϣ
	len = sizeof(xm)/sizeof(xm[0]);
	for(i = 0; i<len; i++){
		xm[i].tickets = 0;
		printf("�������%d��ѡ������֣�\n",i+1);
		scanf("%s",xm[i].name);
	}
	//��Ʊ����
	for(i=0;i<5;i++){
		
		mark = 0;
		printf("��������Ͷ��˭��\n");
		memset(tmpName,'\0',sizeof(tmpName)); //ÿ�����һ��
		scanf("%s",tmpName);//����ѡ�е�ѡ�����֣����һ��ѡƱ����������һ��
		for(j = 0;j<len; j++){ //�õ����֣���Ӧ��ѡ��Ʊ����1
			if(strcmp(tmpName, xm[j].name) == 0){
				xm[j].tickets++;
				mark  = 1;
			}
		}
		if(mark == 0){
			printf("û�д˺�ѡ�ˣ�����\n");
			feiPiao++;
		}
	}
	//�������
	for(i=0;i<len;i++){
		printf("���֣�%s,Ʊ����%d\n",xm[i].name,xm[i].tickets);
	}
	max = xm[0];
	for(i=1;i<len;i++){
		if(max.tickets < xm[i].tickets){
			max = xm[i];
		}
	}
	printf("%s��%dƱ��ѡ������Ʊ��%d\n",max.name,max.tickets,feiPiao);
}