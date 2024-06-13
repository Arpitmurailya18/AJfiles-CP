       AJ(i,0,n) cin>>a[i];
       const auto min_of = [&](auto a, auto b) { return a+b; };
       partial_sum(a.cbegin(), a.cend(), presum.begin(), min_of);
       const auto maxi = [&](auto a, auto b) { return max(a,b); };
       partial_sum(a.cbegin(), a.cend(), masum.begin(), maxi);
       debug(presum);
       debug(masum);
       AJ(i,1,n){
        if(presum[i]-masum[i]==masum[i]) c++;
       }
       if(a[0]==0)cout<<c+1<<endl;
       else cout<<c<<endl;