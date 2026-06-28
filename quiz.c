#include <stdio.h>
#include <ctype.h>
int main()
{
    char questions[5][100]={
        "1.who discovered the theory of relativity:?",
        "2.what does NASA stand for:?",
        "3.which country has the most freshwater:?",
        "4.where are most pyramids found:?",
        "5.who sang the song intentions:?"
    };
    int size=sizeof(questions)/sizeof(questions[0]);
    char choices[20][100]={
        "A.Isaac Newton","B.Albert Eeinstein","C.Karl Max","D.Conficious",
        "A.National Aesthetics Space Station","B.No Austraunaut Stays Awake","C.National Aeronotics And Space Administration","D.Neither of the above",
        "A.Egypt","B.Russia","C.USA","D.Canada",
        "A.Sudan","B.India","C.Egypt","D.Libya",
        "A.Justin Beiber","B.Ariana Grande","C.SZA","D.Selena Gomez"
    };
    char answers[5]={'B','C','D','A','A'};
    char guess[5];
    int score=0;
    char grade;
    for(int i=0;i<size;i++)
    {
        printf("%s\n",questions[i]);
        for(int j=i*4;j<(i*4)+4;j++)
        {
         printf("%s\n",choices[j]);

        }
        printf("guess: ");
        scanf(" %c",&guess[i]);
        guess[i]=toupper(guess[i]);
        if(answers[i]==guess[i])
        {
           printf("correct\n");
           score++;
        }else
        {
           printf("thats not quite true the answer is %c\n",answers[i]);
        }
    }
    printf("\nyour score is %d/5",score);
    switch (score)
    {
        case 5:
        grade='A';
        break;
        case 4:
        grade='B';
        break;
        case 3:
        grade='C';
        break;
        case 2:
        grade='D';
        break;
        default:
        grade='F';
        break;
    }
    printf("\nyour grade is %c",grade);
    return 0;
}