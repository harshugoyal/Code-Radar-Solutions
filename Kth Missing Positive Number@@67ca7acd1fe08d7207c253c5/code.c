int findKthMissing(int arr[],n,k){
   int  missingcount=0,current=1,index=0;
   while(missing count<k){
        if(index<n && arr[index]==current){
            index++;
        }
        else{
            missingcount++;
        }
            if(missingcount==k){
                return current;
            }
    current++;

   }
}