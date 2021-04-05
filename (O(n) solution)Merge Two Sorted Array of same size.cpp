 int findMedian(int[] a, int[] b) {
        int n = a.length;
        int i = 0,j = 0;
        int m1,m2;
        m1 = m2 = -1;
        for(int c = 0;c<=n;c++){
            if(i == n){
                m1 = m2;
                m2 = b[0];
                break;
            }
            else if(j == n){
                m1 = m2;
                m2 = a[0];
                break;
            }
            if(a[i]<=b[j]){
                m1 = m2;
                m2 = a[i];
                i++;
            }
            else{
                m1 = m2;
                m2 = b[j];
                j++;
            }
        }
        return (m1+m2)/2;
    }
