public class pat {
    public static void main(String[] args)
    {
  
    
    int n=6;
    int i,j;
    for (i=0;i<n;i++)
    {
      for(j=1;j<=i;j++)
      {
        System.out.print(" ");
      }
      for(j=n;j>i;j--)
      {
        System.out.print("*");
      }
  System.out.println();
    }
        
    }
  
}
