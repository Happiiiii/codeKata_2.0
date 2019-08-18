function palindrome(str) {
  var rev="";
  var i;
  for(let i = 0; i < str.length; i++)
  {
    if((str[i] < 'a'&& str[i]>'z') ||(str[i] <'A' && str[i] >'Z'))
  }
  for(i=str.length-1;i>=0;i--)
  {
rev = rev + str[i];
  }
  if(str == rev )
{
   return true;
}
else if(str[i] == " ")
{
  return false;
}
 
}



palindrome("nope");
