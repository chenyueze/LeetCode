bool isValid(char * s){
    char data[2048 * 2];
    int length = 0, i = 0;
    while(s[i] != '\0'){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            length += 1;
            data[length] = s[i];
        }else if((s[i] == ')' && data[length] == '(')
              || (s[i] == '}' && data[length] == '{')
              || (s[i] == ']' && data[length] == '[')){
            length -= 1;
        }else{
            return false;
        }
        i += 1;
    }
    if(length == 0) return true;
    else return false;
}
