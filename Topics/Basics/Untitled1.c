s.pop_back();

cout<<s[0]<<"\n";

cout<<s[s.size()-1]<<"\n";

auto it=s.begin();
it += (qu[5]-'0');
sort(it,it+2);

auto it=s.begin();
it += (qu[8]-'0');
reverse(it,it+2);

cout<<s[qu[6]-'0']<<"\n";

s += qu[10];

cout<<s.substr(qu[7]-'0',qu[9]-'0')<<"\n";
