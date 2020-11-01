#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct secretCode
{
    char agentID[8];
    char nama[8];
    char secretCode[11];
};

int main()
{
    struct secretCode agent1, agent2;
    char agentID[9], nama[9], secretCode[12];

    strcpy(agent1.agentID, "1123418");
    strcpy(agent1.nama, "Agent P");
    strcpy(agent1.secretCode, "3#4943181D");
    strcpy(agent2.agentID, "1102141");
    strcpy(agent2.nama, "Agent X");
    strcpy(agent2.secretCode, "#9213284HB");

    system("clear");
    printf("Masukkan Agent ID\t: ");
    fgets(agentID, 9, stdin);
    strtok(agentID, "\n");
    printf("Masukkan Nama\t\t: ");
    fgets(nama, 9, stdin);
    strtok(nama, "\n");
    printf("Masukkan Secret Code\t: ");
    fgets(secretCode, 12, stdin);
    strtok(secretCode, "\n");

    if (((strcmp(agent1.agentID, agentID) == 0) && (strcmp(agent1.nama, nama) == 0) &&
         (strcmp(agent1.secretCode, secretCode) == 0)) ||
        ((strcmp(agent2.agentID, agentID) == 0) && (strcmp(agent2.nama, nama) == 0) &&
         (strcmp(agent2.secretCode, secretCode) == 0)))
    {
        printf("Protect this data\t: ​S3A{S3CRETC0DE}");
    }
    else
    {
        printf("Maaf inputan kamu salah");
    }

    return 0;
}
