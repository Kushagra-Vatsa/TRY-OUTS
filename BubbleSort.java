public class BubbleSort {
    static void bubblesort(int arr[],int n){
        for(int i=n-1;i>=1;i--){
            for(int j=0;j<=i-1;j++){
                if (arr[j]>arr[j+1]) {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }
    public static void main(String[] args) {
        int arr[]={9,5,1,6};
        int n=arr.length;
        bubblesort(arr, n);
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
    }
}
