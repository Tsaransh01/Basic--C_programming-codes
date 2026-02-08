 #include<stdio.h>
 int main()
 {
     char letter ;
     printf("enter your friend's code letter \n");
     scanf("%c", &letter);
     switch (letter)
     //Allowed letters are s,n,a,p,k,v,L
     {
     case 's' : printf("Saransh & Sutirth & shiva^2 & Sanju & Saket\n");
               break;
     case 'n' : printf("Nitin\n");
               break;
     case 'a' : printf("Ayush & Arunava & Abhinay & Arya & Aradhya\n");
               break;
     case 'p' : printf("Pranjal & Pranav & Pratham & Prakhar & Prashant\n");
               break ;
     case 'k' : printf("KUSHAL & Komal");
                break ;
     case 'v' : printf("Vachan & Vicky & Vishal \n");
                break ;
     case 'l' : printf ("Laxmidhar\n");
                break ;
      default : printf("sorry you are still somewhat in my consicious mind unable to remember your name\n");
               break ;
         }
      printf(" thanku :) <3 UwU");
     return 0;
 }