#include <stdio.h>

// Fill the definition of the struct.
typedef struct{
    int student_id;
    float mt_grade;
    float final_grade;
    char letter_grade;
} Student;

void set_grade(Student *p){
    float score;
    score = p->mt_grade * 0.4 + p->final_grade * 0.6;

    if(score > 75)
        p->letter_grade = 'A';
    else if(score > 50)
        p->letter_grade = 'B';
    else if(score > 25)
        p->letter_grade = 'C';
    else
        p->letter_grade = 'F';
}

int main(){
    int N;
    scanf("%d", &N);
    Student cmpe[N];
    int i;
    for(i=0; i < N; i++){
        scanf("%f %f", &cmpe[i].mt_grade, &cmpe[i].final_grade);
        cmpe[i].student_id = 1000 + i;
        // Call set grade function
        set_grade(&cmpe[i]);
    }

    for(i = 0; i < N; i++)
        printf("%d %c\n", cmpe[i].student_id, cmpe[i].letter_grade);

    return 0;
}
