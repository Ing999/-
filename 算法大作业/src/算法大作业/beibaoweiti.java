package 算法大作业;

public class beibaoweiti {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] t = {0, 1, 2, 3 , 4, 5};
		int middle = 0;
		int sumTime = 0;
		for(int i = 1; i < t.length; i++){
			sumTime += t[i];
		}
		middle = sumTime / 2;
		int [][] sum = new int [t.length][middle+1];
		for(int i = 1; i < t.length; i++){
			for(int j = 1; j <= middle; j++){
				if(j - t[i]  >= 0)
					sum[i][j] = Math.max(sum[i-1][j], sum[i-1][j-t[i]]+t[i]);
				else
					sum[i][j] = sum[i-1][j];
			}
		}
		/*for(int i = 0; i <sum.length; i++){
			for(int j = 0; j < sum[0].length; j++)
				System.out.print(sum[i][j]+" ");
			System.out.println();
		}*/
		System.out.println(sumTime-sum[sum.length-1][sum[0].length-1]);
	}
 
}



