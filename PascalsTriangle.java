import java.util.ArrayList;
class PascalsTriangle {
    public static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList();
	    List<Integer>[] arrLists= new ArrayList[numRows];
        for(int i=0;i<numRows;i++){
            arrLists[i]=new ArrayList();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) (arrLists[i]).add(1);	
                else{
                    int num = (arrLists[i-1]).get(j-1)+(arrLists[i-1]).get(j);
                    (arrLists[i]).add(num);
                }
            }
            ans.add(arrLists[i]);
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<List<Integer>> res = generate(n);
    }
}