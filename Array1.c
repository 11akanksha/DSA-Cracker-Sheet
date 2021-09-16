string reverseWord(string str){
    
  //Your code here
  int l = str.size();
  for(int i = 0; i < l/2 ; i++){
      char t = str[i];
      str[i] = str[l-i-1];
      str[l-i-1] = t;
  }
  str[l] = '\0';
  return str;
}

