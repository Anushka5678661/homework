
#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int sapID;
    int rollNo;
    char name[50];
    char phone[15];
    char email[50];
    int year;
    int semester;
    float sgpa[8];
    float cgpa;
};

struct Student students[MAX];
int count = 0;

void addStudent() {
    if (count >= MAX) {
        printf("Limit reached.\n");
        return;
    }
    struct Student s;
    printf("Enter SAP ID: "); 
    scanf("%d", &s.sapID);
    printf("Enter Roll No: "); 
    scanf("%d", &s.rollNo);
    printf("Enter Name: "); 
    scanf(" %s", &s.name);
    printf("Enter Phone: "); 
    scanf("%s", &s.phone);
    printf("Enter Email: "); 
    scanf("%s", &s.email);
    printf("Enter Year (1-4): "); 
    scanf("%d", &s.year);
    printf("Enter Semester (1-8): "); 
    scanf("%d", &s.semester);
    printf("Enter SGPA for 8 semesters:\n");
    for (int i = 0; i < 8; i++) {
        printf("Semester %d: ", i + 1);
        scanf("%f", &s.sgpa[i]);
    }
    float sum = 0;
    for (int i = 0; i < 8; i++) sum += s.sgpa[i];
    s.cgpa = sum / 8;
    students[count++] = s;
    printf("Student added successfully!\n");
}

void displayStudent(int index) {
    struct Student s = students[index];
    printf("\nSAP ID: %d\nRoll No: %d\nName: %s\nPhone: %s\nEmail: %s\nYear: %d\nSemester: %d\nCGPA: %.2f\n",
           s.sapID, s.rollNo, s.name, s.phone, s.email, s.year, s.semester, s.cgpa);
}

void searchStudent() {
    int id;
    printf("Enter SAP ID to search: "); scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].sapID == id) {
            displayStudent(i);
            return;
        }
    }
    printf("Student not found.\n");
}

void displayAll() {
    if (count == 0) {
        printf("No records to display.\n");
        return;
    }
    for (int i = 0; i < count; i++) displayStudent(i);
}

void displayCGPAofEach() {
    if (count == 0) {
        printf("No students available.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        printf("Name: %s, SAP ID: %d, CGPA: %.2f\n", students[i].name, students[i].sapID, students[i].cgpa);
    }
}

void averageCGPA() {
    if (count == 0) {
        printf("No students to calculate.\n");
        return;
    }
    float total = 0;
    for (int i = 0; i < count; i++) total += students[i].cgpa;
    printf("Average CGPA of all students: %.2f\n", total / count);
}

void deleteStudent() {
    int id;
    printf("Enter SAP ID to delete: "); scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].sapID == id) {
            for (int j = i; j < count - 1; j++) students[j] = students[j + 1];
            count--;
            printf("Student deleted.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void sortBySAP() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].sapID > students[j + 1].sapID) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    displayAll();
}

void sortByName() {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    displayAll();
}

int main() {
    int choice;
    do {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Add Student\n");
        printf("2. Search Student by SAP ID\n");
        printf("3. Display All Students (Unsorted)\n");
        printf("4. Display CGPA of Each Student\n");
        printf("5. Calculate Average CGPA of All Students\n");
        printf("6. Delete Student Record\n");
        printf("7. Display Students Sorted by SAP ID\n");
        printf("8. Display Students Sorted by Name\n");
        printf("9. Exit\n");
        printf("Enter choice: "); 
        scanf("%d", &choice);
        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: displayAll(); break;
            case 4: displayCGPAofEach(); break;
            case 5: averageCGPA(); break;
            case 6: deleteStudent(); break;
            case 7: sortBySAP(); break;
            case 8: sortByName(); break;
            case 9: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 9);
    return 0;
}