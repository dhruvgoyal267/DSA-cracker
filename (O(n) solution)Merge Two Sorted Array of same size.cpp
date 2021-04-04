int findMedian(int[] a, int[] b) {
        int n = a.length;
        int i = 0,j = 0;
        int m1,m2;
        m1 = m2 = -1;
        for(int c = 0;c<=n;c++){
            if(i == n)
                return b[0];
            else if(j == n)
                return a[0];
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
