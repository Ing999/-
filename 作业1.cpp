//������С��������Prim�㷨 
//���룺��Ȩ��ͨͼG = <V��E>
//�����Et�����G����С�������ıߵļ���
Vt<-{v0}//���������ⶥ������ʼ�����Ķ��㼯��
Et<-?
for i<- 1 to |V|-1  do
�����еı�(v,u)�У���Ȩ����С�ı�ek=(vk,uk),ʹ��v��Vt�У�u��V-Vt��
Vt<-Vt U {u1}
Et<-Et U {e1}
return Et


//������С��������Kruskal
//���룺��Ȩ��ͨͼG = <V��E>
//�����Et�����G����С�������ıߵļ���
��Լ����ձߵ�Ȩ��w(e1)<=.....<=w(en)�ĵķǵݼ�˳��E����
Et<-?;	//��ʼ�����бߵĶ��㼯���Լ����ϵĹ�ģ
K<-0;      //��ʼ���Ѵ���ıߵ�����
while ecounter<|V|-1     do 
k<-k+1
ecounter <- ecounter +1
if Et U {ek} �޻�·
Et<-Et U {ek};      ecounter<-ecounter+1
return Et
