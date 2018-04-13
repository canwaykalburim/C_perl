#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

void Intro();
void Real_Intro();
void E_Real_Intro();
void Mode();
void K_choices();
void Choices();

void Menu();
void Start();
void Option();
void Explanation();
void End();
void developer();

void K_menu();
void K_start();
void K_option();
void K_explanation();
void K_end();
void K_developer();

char nInput[5] = { 0 };
char back[10] = { 0 };

void Intro()
{
	printf("\n  �������� ����\n");
	printf("  Youngjin's adventure\n\n");
	_getch();
	system("cls");
	printf("\n  made by C.W.K\n\n");
	_getch();
	system("cls");
	printf("\n  �� ������ �ټ� �Ұ����� ��Ұ� ���ԵǾ� �ֽ��ϴ�.\n");
	printf("  This game contains some unwholesome constituent.\n\n");
	_getch();
	system("cls");
	printf("\n  �� ������ �����ڴ� ��� �� ���մϴ�.\n");
	printf("  The creators of this game is not good at English.\n\n");
	_getch();
	system("cls");
	printf("\n  �� ������ �����ڴ� ��� ���ϱ⿡ �ѱ��� ���� ���� �帳�ϴ�.\n");
	printf("  The developers of this game are not good at English,\n  so they recommend the Korean version.\n\n");
	_getch();
	system("cls");
}

void Real_Intro()
{
	printf("\n  ���� �������� �����ڹ̵�� �߸� �Ǿ���.\n\n");
	_getch();
	system("cls");
	printf("\n  made by C.W.K\n\n");
	_getch();
	system("cls");
	printf("\n  �ù��� �����Դϴ�. ���� Ȥ�� �ٸ� ������ �߰��Ͻø� ������ �ֽñ� �ٶ��ϴ�.\n\n");
	_getch();
	system("cls");
	printf("\n  ��\n\n");
	_getch();
	system("cls");
}

void E_Real_Intro()
{
	printf("\n  Youngjin's love comedy was wrong\n\n");
	_getch();
	system("cls");
	printf("\n  made by C.W.K\n\n");
	_getch();
	system("cls");
	printf("\n  It's a demonstration game. Please let me know if you find any translation or other error.\n\n");
	_getch();
	system("cls");
	printf("\n  finish\n\n");
	_getch();
	system("cls");
}

void Mode()
{	
	printf("\n  ���Ͻô� ��带 ������ �ּ���. \n  Please select the desired mode.\n\n");

	printf("  ���ڸ� �Է��ϸ� ����˴ϴ�.\n  Enter a number to apply\n\n");
	printf("  1. �ѱ���\n");
	printf("  2. English\n\n");
	
	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		Menu();
	}
}

void Menu()
{
	printf("  ��YoungJin's Adventure��\n\n");

	printf(" 1. start\n");
	printf(" 2. explanation\n");
	printf(" 3. option\n");
	printf(" 4. developer\n");
	printf(" 5. Select language\n");
	printf(" 6. end\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		Start();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		Explanation();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls"); 
		Option();
	}
	else if (strcmp(nInput, "4") == 0)
	{
		system("cls");
		developer();
	}
	else if (strcmp(nInput, "5") == 0)
	{
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0)
	{
		system("cls");
		End();
	}
}

void Start()
{
	printf("  XX. XX. 20XX (M/D/Y)\n");
	_getch();
	system("cls");
	printf("  Youngjin is running late for school today.\n");
	_getch();
	system("cls");
	printf("  Youngjin is running around with bread in his mouth like a main characterin a love comedy.\n");
	_getch();
	system("cls");
	printf("  And it was quite obvious that Youngjin bumped into someone at the corner.\n");
	_getch();
	system("cls");
	printf("  And the bread fell off.\n");
	_getch();
	system("cls");
	printf("  But like in many love comedies, no one begrudged the falling bread.\n");
	_getch();
	system("cls");
	printf("  ???: Oh.....\n");
	_getch();
	system("cls");
	printf("  Youngjin: Oh! I'm Sorry!\n");
	_getch();
	system("cls");
	printf("  Youngjin: Huh? How about you?\n");
	_getch();
	system("cls");
	printf("  What was standing there was the same classmate Sim youngrae(��).\n");
	_getch();
	system("cls");
	printf("  Yes. For him, love comedy is a comic story.\n");
	_getch();
	system("cls");
	printf("  Sim youngrae: Ao, this Ssagbagaji Bitch.(Koran bad world)\n");
	_getch();
	system("cls");
	printf("  The word that came out of his mouth was a word that I could not think of as someone who had said \"Ayayya ...\" before.\n");
	_getch();
	system("cls");
	printf("  What shall I say??\n\n");
	_getch();
	system("cls");

	Choices();
}

void Explanation()
{
	printf("  manual: Enter a number to select an choices.\n\n");

	printf("  Game description: This game is a story of two boy Park youngjin and Kim youngrae, all of which are fictional and have nothing to do with the real person.\n\n");
	printf("  Both Park youngjin, Kim youngrae and developer used aliases.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		Explanation();
	}
}

void Option()
{
	printf("        404\n\n  Unable to set.\n\n");

	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		Option();
	}
}

void developer()
{
	printf("  [administrator]\n  Seo dongyoung\n\n");
	printf("  [story]\n  Seo dongyoung\n\n");
	printf("  [help]\n  Jeong jihyeon\n  Seong gihyeon\n  Kim dohun\n  Kim youngrae\n\n");
	printf("  If you want to go back, enter \"1\".\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		Menu();
	}
	else
	{
		printf("  Please enter the correct number.\n");
		_getch();
		developer();
	}
}

void End()
{
	exit(0);
}

void Choices()
{
	printf("  1. Fucking bitch, you are dead today.\n");
	printf("  2. Don't have Ssagbagaji bitch, you are dead today.\n");
	printf("  3. Oh, my God. I'm right about my mistake, but don't you think that's too harsh??\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		printf("  On that day, youngjin lost to youngrae and could not lift his face.\n");
		_getch();
		system("cls");
		printf("   BAD END1\n  It was stronger than I thought.\n\n");
		_getch();
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		printf("  On that day, youngjin lost to youngrae and could not lift his face.\n");
		_getch();
		system("cls");
		printf("   BAD END2\n  Don't have Ssagbagaji bitch.\n\n");
		_getch();
		system("cls");
		Menu();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		printf("  Sim youngrae: Oooh ... I'm the only bad guy if you say that. You blockhead.\n");
		_getch();
		system("cls");
		printf("  Youngrae was blushing somewhere.\n");
		_getch();
		system("cls");
		printf("  But our protagonist, Sim youngjin, who is so insensitive ...\n");
		_getch();
		system("cls");
		printf("  What he said after much thought....\n");
		_getch();
		system("cls");
		printf("  .....\n");
		_getch();
		system("cls");
		printf("  Youngjin: Well, Is it going to be like that?\n");
		_getch();
		system("cls");
		printf("  Sim youngrae: EHyu...\n");
		_getch();
		system("cls");
		printf("  Youngjin: Why? What are you worried about?\n");
		_getch();
		system("cls");
		printf("  youngjin, who has the tendency of a male protagonist of a common love comedy...\n");
		_getch();
		system("cls");
		printf("  Now the Love Comedies standard...\n");
		_getch();
		system("cls");
		printf("   The advent of new rivals!\n");
		_getch();
		system("cls");
		printf("  ???: What are you doing with youngjin??\n");
		_getch();
		system("cls");
		printf("  Youngjin: Oh...? simyoung..?\n");
		_getch();
		system("cls");
		printf("  Seo simyoung: What are you doing with Youngjin?!\n");
		_getch();
		system("cls");
		printf("  A boy who seems to have something to do with youngjin...\n");
		_getch();
		system("cls");
		printf("  Sim youngrae: It's you. youngjin's boyfriend...\n");
		_getch();
		system("cls");
		printf("  Youngjin: ???\n");
		_getch();
		system("cls");
		printf("  Seo simyoung: I'm sorry, but Youngjin is mine. Don't even look at it.\n");
		_getch();
		system("cls");
		printf("  Youngjin: ??????\n");
		_getch();
		system("cls");
		printf("  I don't think Youngjin understood it alone..\n");
		_getch();
		system("cls");
		printf("  The two boys around Youngjin ... What is their fate??\n");
		_getch();
		system("cls");
		_getch();
		E_Real_Intro();
	}
}

void K_menu()
{
	printf("  �ڿ������� �����\n\n");

	printf(" 1. ����\n");
	printf(" 2. ����\n");
	printf(" 3. ����\n");
	printf(" 4. ������\n");
	printf(" 5. ��� ����\n");
	printf(" 6. ������\n\n");

	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		K_start();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		K_explanation();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		K_option();
	}
	else if (strcmp(nInput, "4") == 0)
	{
		system("cls");
		K_developer();
	}
	else if (strcmp(nInput, "5") == 0)
	{
		system("cls");
		Mode();
	}
	else if (strcmp(nInput, "6") == 0)
	{
		system("cls");
		_getch();
		K_end();
	}
	else
	{
		printf("  �ùٸ� ���� �Է��� �ּ���.\n\n");
		K_menu();
	}
}

void K_start()
{
	printf("  20XX�� XX�� XX��\n");
	_getch();
	system("cls");
	printf("  �����̴� ���õ� �б��� �ʾ �޸��� �ִ�.\n");
	_getch();
	system("cls");
	printf("  �����̴� ���� �ڹ̵��� ���ΰ�ó�� �Կ��� �Ļ��� ���� �޸��� �ִ�.\n");
	_getch();
	system("cls");
	printf("  �׸��� ���� ���ϰԵ� �����̴� �ٴٰ� �ڳʿ��� �������� �ε�����.\n");
	_getch();
	system("cls");
	printf("  �׸��� �Ļ��� ��������.\n");
	_getch();
	system("cls");
	printf("  ������ ���� ���� �ڹ̵𿡼� �׷��� ������ ������ �Ļ��� �Ʊ�� ���� �ʾҴ�.\n");
	_getch();
	system("cls");
	printf("  ???: �ƾ߾�.....\n");
	_getch();
	system("cls");
	printf("  ����: ��! �˼��մϴ�!\n");
	_getch();
	system("cls");
	printf("  ����: ��? �ʴ�?\n");
	_getch();
	system("cls");
	printf("  �װ��� �� �ִ� ���� ���� �� ģ�� �ɿ���(��).\n");
	_getch();
	system("cls");
	printf("  �׷���. �׿��� ���� �ڹ̵�� ��ȭ�� �̾߱��̴�.\n");
	_getch();
	system("cls");
	printf("  �ɿ���: �ƿ� �̷� �Ϲٰ��� ���� ����.\n");
	_getch();
	system("cls");
	printf("  �׿� �Կ��� ���� ���� �Ʊ��� \"�ƾ߾�...\"��� �ߴ� ����̶�� ������ �� ���� ���̾���.\n");
	_getch();
	system("cls");
	printf("  ���� ���� �ұ�?\n\n");
	_getch();
	system("cls");
	
	K_choices();
}

void K_explanation()
{
	printf("  ���۹�: ���ڸ� �Է��Ͽ� �������� �����մϴ�.\n\n");

	printf("  ���� ����: �� ������ �ڿ����̶�� �ҳ�� �迵����� ����� �̾߱�� �� ���ӿ� ���� ������ ��� �㱸�̸�,���� �ι����� ����� �����ϴ�.\n\n");
	printf("  �ڿ����� �迵�� ��� ������ ����߽��ϴ�.\n\n");

	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_explanation();
	}
}

void K_option()
{
	printf("        404\n\n  ������ �� �����ϴ�.\n\n");

	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_option();
	}
}

void K_developer()
{
	printf("  [�Ѱ�]\n  ������\n\n");
	printf("  [���丮]\n  ������\n\n");
	printf("  [������ �� ���]\n  ������\n  ������\n  �赵��\n  �迵��\n");
	printf("  �ڷ� ���� ������ \"1\"�� �Է��ϼ���.\n\n");
	printf(" �� ");
	scanf("%s", back);

	if (strcmp(back, "1") == 0)
	{
		system("cls");
		K_menu();
	}
	else
	{
		printf("  �ùٸ� ���� �Է��Ͽ� �ּ���.\n");
		_getch();
		K_developer();
	}
}

void K_end()
{
	exit(0);
}

void K_choices()
{
	printf("  1. �� ��ģ���� �� ���� ������\n");
	printf("  2. �̷� �Ϲٰ��� ���� ���� �� ���� ������\n");
	printf("  3. ��� ������ ���� �߸��� ���� ������ �� ���� �ʹ� ������ �ʴ�?\n\n");
	
	printf(" �� ");
	scanf("%s", nInput);

	if (strcmp(nInput, "1") == 0)
	{
		system("cls");
		printf("  �׳� �����̴� �������� �߸��� ���� �� ��� �ٳ��.\n");
		_getch();
		system("cls");
		printf("   BAD END1\n  �������� ���ߴ�.\n\n");
		_getch();
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "2") == 0)
	{
		system("cls");
		printf("  �׳� �����̴� �������� �߸��� ���� �� ��� �ٳ��.\n");
		_getch();
		system("cls");
		printf("   BAD END2\n  �ΰ��� ���� ��.\n\n");
		_getch();
		system("cls");
		K_menu();
	}
	else if (strcmp(nInput, "3") == 0)
	{
		system("cls");
		printf("  �ɿ���: �ƴ� �ϰ� �׷��� ���ϸ� ���� ���۳� ���ݾ� �� �Ϲٰ��� ���� ���...\n");
		_getch();
		system("cls");
		printf("  ������ ��� �𸣰� ���� ������ �־���.\n");
		_getch();
		system("cls");
		printf("  ������ ��ġ ���� �츮�� ���ΰ� �ɿ���...\n");
		_getch();
		system("cls");
		printf("  �װ� ��� ���� ��������....\n");
		_getch();
		system("cls");
		printf("  .....\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ��... �׷��� �Ǵ� �ǰ�?\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ����.....\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ��? ���� ����־�?\n");
		_getch();
		system("cls");
		printf("  ���� ���� �ڸ޵��� ���� ���ΰ��� ������ ���� ���� ����...\n");
		_getch();
		system("cls");
		printf("  ���� ���� �ڸ޵��� ����...\n");
		_getch();
		system("cls");
		printf("   ���ο� ���̹� ����\n");
		_getch();
		system("cls");
		printf("  ???: �� ���� �����̶� ���ϴ� �ž�?\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ��...? �ɿ���...\n");
		_getch();
		system("cls");
		printf("  ���ɿ�: �� ���� �����̶� ���ϴ� �ž�!\n");
		_getch();
		system("cls");
		printf("  ���� �����̶� ���� �־� ���̴� �ҳ� ����...\n");
		_getch();
		system("cls");
		printf("  �ɿ���: �ʱ��� �������� ����ģ��...\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ???\n");
		_getch();
		system("cls");
		printf("  ���ɿ�: �̾������� �����̴� ������ ���� ��������\n");
		_getch();
		system("cls");
		printf("  �ɿ���: ??????\n");
		_getch();
		system("cls");
		printf("  �ƹ����� ������ ȥ�� ���� �� �Ѱ� ����.\n");
		_getch();
		system("cls");
		printf("  �����̸� �ѷ��� �� ���� �ҳ��... �� ���� �����?\n");
		_getch();
		system("cls");
		_getch();
		Real_Intro();
	}
}

int main()
{
	Intro();
	Mode();
}