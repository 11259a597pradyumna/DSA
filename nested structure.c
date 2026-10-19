#include <stdio.h>
#include <string.h>
struct address {
    char city[30];
    char state[30];
    int pincode;
};
struct student {
    int id;
    char name[50];
    float cgpa;
    struct address addr;   
};
int main() {
    struct student s1;
    s1.id = 11259419;
    strcpy(s1.name, "krupa");
    s1.cgpa = 7.83;
    strcpy(s1.addr.city, "Chennai");
    strcpy(s1.addr.state, "Tamil Nadu");
    s1.addr.pincode = 600001;
    printf("Student ID: %d\n", s1.id);
    printf("Student Name: %s\n", s1.name);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);
    printf("Pincode: %d\n", s1.addr.pincode);
    return 0;
}