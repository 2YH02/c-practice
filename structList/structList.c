#include <stdio.h>

typedef struct USERDATA
{
	char szName[32];
	char szPhone[32];

	struct USERDATA* pNext;
} USERDATA;

void PrintUserData(USERDATA* pUser)
{
	if (pUser == NULL) return;

	printf("[%p] %s, %s, pNext: %p\n", pUser, pUser->szName, pUser->szPhone, pUser->pNext);

	PrintUserData(pUser->pNext);
	return;
}

int main(void)
{
	USERDATA userList[4] = {
		{"Â¯±¸", "123", NULL},
		{"Ã¶¼ö", "234", NULL},
		{"À¯¸®", "345", NULL},
		{"¸Í±¸", "456", NULL},
	};

	USERDATA* pUser = NULL;

	userList[0].pNext = &userList[1];
	userList[1].pNext = &userList[2];
	userList[2].pNext = &userList[3];
	userList[3].pNext = NULL;

	PrintUserData(&userList[0]);
	return 0;
}