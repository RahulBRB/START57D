int main() {

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int cnt=0,zeroElement=0;
        for(int i=0;i<n;i++)
            cin>>arr[i];
    for(const int &n:arr){
        if(n==0)
            zeroElement=1;
        if(n<0)
            cnt++;
    }
    if(zeroElement>=1)
        cout<<'0'<<endl;
    else if (cnt%2==0)
        cout<<'0'<<endl;
    else    cout<<'1'<<endl;
    }
    return 0;
}
