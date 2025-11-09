//#include <stdio.h>
//int main() {
//    int n;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    int arr[n];
//    printf("Enter %d elements:\n", n);
//    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
//    printf("Array elements: ");
//    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,s=0;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//		s+=a[i];
//	}
//	printf("Sum: %d\nAverage: %.2f\n",s,(float)s/n);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int max=a[0];
//	int min=a[0];
//	for(int i=1;i<n;i++){
//		if(a[i]>max) max=a[i];
//		if(a[i]<min) min=a[i];
//	}
//	printf("Max: %d\nMin: %d",max,min);
//	
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n],rev[n];
//	for(int i=0;i<n;i++) scanf("%d",&a[i]);
//	for(int i=0;i<n;i++) rev[i]=a[n-i-1];
//	printf("Reversed array: ");
//	for(int i=0;i<n;i++) printf("%d",rev[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n,asc=1,dec=1;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++) scanf("%d",&a[i]);
//	for(int i=0;i<n-1;i++){
//		if (a[i] > a[i + 1])
//            asc = 0;  
//        if (a[i] < a[i + 1])
//            dec = 0; 
//	}
//	if(asc) printf("Array is sorted in ascending order");
//	else if (dec) printf("Array is sorted in descding order");
//	else printf("Array is not sorted");
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int n;
//    scanf("%d", &n);
//    int a[n];
//    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
//	int j = 0; 
//    for (int i = 0; i < n; i++) {
//        if (a[i] != 0) {
//            a[j] = a[i];
//            j++;
//        }
//    }
//    while (j < n) {
//        a[j] = 0;
//        j++;
//    }
//    printf("After moving zeros: ");
//    for (int i = 0; i < n; i++) printf("%d ", a[i]);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	int j=0;
//	for(int i=0;i<n;i++){
//		if(a[i]<0) {
//		int temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//		j++;
//		}
//	}
//	printf("After moving negatives: ");
//    for (int i = 0; i < n; i++) printf("%d ", a[i]);
//    return 0;
//}

//Separate 0s and 1s
//#include <stdio.h>
//int main() {
//    int n, count = 0;
//    scanf("%d", &n);
//    int a[n];
//    for (int i=0;i<n;i++) {
//        scanf("%d", &a[i]);
//        if (a[i]==0) count++;
//    }
//    for(int i=0;i<count;i++) a[i]=0;
//    for(int i=count;i<n;i++) a[i]=1;
//     printf("Separated 0s and 1s: ");
//    for (int i = 0; i < n; i++) printf("%d ", a[i]);
//    return 0;
//}

#include <stdio.h>
int main() {
    int n; scanf("%d", &n);
    int arr[n], ans = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        ans ^= arr[i]; 
    }
    printf("Unique element: %d", ans);
    return 0;
}
