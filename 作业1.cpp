//构造最小生成树的Prim算法 
//输入：加权连通图G = <V，E>
//输出：Et，组成G的最小生成树的边的集合
Vt<-{v0}//可以用任意顶点来初始化树的顶点集合
Et<-?
for i<- 1 to |V|-1  do
在所有的边(v,u)中，求权重最小的边ek=(vk,uk),使得v在Vt中，u在V-Vt中
Vt<-Vt U {u1}
Et<-Et U {e1}
return Et


//构造最小生成树的Kruskal
//输入：加权连通图G = <V，E>
//输出：Et，组成G的最小生成树的边的集合
序对集按照边的权重w(e1)<=.....<=w(en)的的非递减顺合E排序
Et<-?;	//初始化树中边的顶点集合以及集合的规模
K<-0;      //初始化已处理的边的数量
while ecounter<|V|-1     do 
k<-k+1
ecounter <- ecounter +1
if Et U {ek} 无回路
Et<-Et U {ek};      ecounter<-ecounter+1
return Et
