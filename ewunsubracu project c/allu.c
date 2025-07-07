#include <stdio.h>

// ======= East West University Function =======
void eastWestUniversity() {
    int deptOption, infoOption;
    char *departments[] = {
        "BBA", "BSS in Economics", "BA in English", "LL.B (Hon’s)", "BSS in Sociology",
        "BSS in Information Studies", "BSS in PPHS", "B.Sc. in ICE", "B.Sc. in CSE",
        "B.Sc. in EEE", "B.Sc. in GEB", "B.Sc. in Civil Engineering", "B.Sc. in Mathematics",
        "B.Sc. in Data Science and Analytics", "B. Pharm"
    };
    int credits[]   = {130,130,130,130,130,130,130,140,140,140,140,145,130,130,158};
    int tuition[]   = {771000,674000,674000,716500,668000,665000,601500,834000,834000,834000,834000,864000,447000,683000,1082000};
    int labFee[]    = {36800,0,0,0,0,0,0,52788,52788,52788,52788,52788,0,52788,52788};
    int admission[] = {20000,20000,20000,20000,20000,20000,20000,20000,20000,20000,20000,20000,20000,20000,20000};
    int total[]     = {827800,730800,730800,773300,724800,721800,658300,906788,906788,906788,906788,936788,519788,755788,1154800};

    printf("\n--- East West University Departments ---\n");
    for (int i = 0; i < 15; i++) {
        printf("%2d. %s\n", i + 1, departments[i]);
    }

    printf("\nEnter your department number (1-15): ");
    scanf("%d", &deptOption);
    deptOption--;

    if (deptOption < 0 || deptOption >= 15) {
        printf("Invalid department number.\n");
        return;
    }

    printf("\nYou selected: %s\n", departments[deptOption]);
    printf("1. Total Tuition Fee\n2. Total Credit\n3. Admission Fee\n4. Lab Fee\n5. Total Cost\n");
    printf("Enter option (1-5): ");
    scanf("%d", &infoOption);

    printf("\n--- Result ---\n");
    switch (infoOption) {
        case 1: printf("Tuition Fee: %d BDT\n", tuition[deptOption]); break;
        case 2: printf("Total Credits: %d\n", credits[deptOption]); break;
        case 3: printf("Admission Fee: %d BDT\n", admission[deptOption]); break;
        case 4: printf("Lab Fee: %d BDT\n", labFee[deptOption]); break;
        case 5: printf("Total Cost: %d BDT\n", total[deptOption]); break;
        default: printf("Invalid option.\n");
    }
}

// ======= North South University Function =======
void northSouthUniversity() {
    int deptOption, infoOption;
    char *departments[] = {
        "Bachelor of Architecture", "BS in CEE", "BS in CSE", "BS in EEE", "BS in ETE",
        "BS in Biochemistry and Biotechnology", "BS in Environmental Science", "BS in Microbiology",
        "BPharm Professional", "BBA Accounting", "BBA Economics", "BBA Entrepreneurship",
        "BBA Finance", "BBA HRM", "BBA International Business", "BBA Management",
        "BBA MIS", "BBA Marketing", "BBA Supply Chain", "BBA General", "BS in Economics",
        "BA in English", "LLB Hons", "BSS in Media and Journalism"
    };
    int credits[] = {170,149,130,130,130,120,130,120,199,120,120,120,120,120,120,120,120,120,120,120,120,123,130,129};

    printf("\n--- North South University Departments ---\n");
    for (int i = 0; i < 24; i++) {
        printf("%2d. %s\n", i + 1, departments[i]);
    }

    printf("\nEnter your department number (1-24): ");
    scanf("%d", &deptOption);
    deptOption--;

    if (deptOption < 0 || deptOption >= 24) {
        printf("Invalid department number.\n");
        return;
    }

    printf("\nYou selected: %s\n", departments[deptOption]);
    printf("1. Total Tuition Fee\n2. Total Credit\n");
    printf("Enter option (1-2): ");
    scanf("%d", &infoOption);

    printf("\n--- Result ---\n");
    switch (infoOption) {
        case 1:
            printf("Tuition Fee: %d BDT\n", credits[deptOption] * 6500);
            break;
        case 2:
            printf("Total Credits: %d\n", credits[deptOption]);
            break;
        default:
            printf("Invalid option.\n");
    }
}

// ======= BRAC University Function =======
void bracUniversity() {
    int deptOption, infoOption;
    char *departments[] = {
        "BSc in APE", "BSS in Anthropology", "Bachelor of Architecture", "BSc in Biotechnology",
        "BPharm (Hons)", "BBA", "BSS in Economics", "BSc in Microbiology", "BSc in Mathematics",
        "LLB Hons", "BSc in CSE", "BSc in CS", "BSc in ECE", "General Education", "Minor in History",
        "BA in English", "BSc in Physics", "BSc in EEE"
    };
    int credits[] = {130,120,207,136,164,130,120,136,127,135,136,124,136,39,24,120,120,136};

    printf("\n--- BRAC University Departments ---\n");
    for (int i = 0; i < 18; i++) {
        printf("%2d. %s\n", i + 1, departments[i]);
    }

    printf("\nEnter your department number (1-18): ");
    scanf("%d", &deptOption);
    deptOption--;

    if (deptOption < 0 || deptOption >= 18) {
        printf("Invalid department number.\n");
        return;
    }

    printf("\nYou selected: %s\n", departments[deptOption]);
    printf("1. Total Tuition Fee\n2. Total Credit\n");
    printf("Enter option (1-2): ");
    scanf("%d", &infoOption);

    printf("\n--- Result ---\n");
    switch (infoOption) {
        case 1:
            if (deptOption == 9) // LLB
                printf("Tuition Fee: %d BDT\n", credits[deptOption] * 8800);
            else
                printf("Tuition Fee: %d BDT\n", credits[deptOption] * 8250);
            break;
        case 2:
            printf("Total Credits: %d\n", credits[deptOption]);
            break;
        default:
            printf("Invalid option.\n");
    }
}

// ======= Main Menu =======
int main() {
    int mainOption;

    while (1) {
        printf("\n========== University Program Info System ==========\n");
        printf("1. East West University\n");
        printf("2. North South University\n");
        printf("3. BRAC University\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &mainOption);

        switch (mainOption) {
            case 1: eastWestUniversity(); break;
            case 2: northSouthUniversity(); break;
            case 3: bracUniversity(); break;
            case 4: 
                printf("Exiting program. Thank you!\n");
                return 0;
            default: printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}