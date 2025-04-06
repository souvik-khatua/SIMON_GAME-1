public class star  {
    
  public static void main(String[] args)
  {

  
  int n=12;
  int i=0;
  int j=0;
  for (i=0;i<n;i++)
  {
    
    for(j=n-1;j>=i;j--)
    {
      System.out.print(" ");
    }
    for(j=0;j<=i;j++)
    {
      System.out.print("*");
    }
    for(j=1;j<=i;j++)
    {
      System.out.print("*");
    }
System.out.println();
  }
  

  
  
  for (i=n;i<=2*n;i++)
  {
    
    for(j=n;j<i;j++)
    {
      System.out.print(" ");
    }
    for(j=2*n;j>=i;j--)
    {
      System.out.print("*");
    }
    for(j=(2*n);j>=i+1;j--)
    {
      System.out.print("*");
    }
System.out.println();
  }
  
  /*  for (i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      System.out.print("*");
    }
System.out.println();
  }*/
      
  }
  }

  
