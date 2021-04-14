#include <stdio.h>
#include <time.h>
#include <windows.h>
int main(int argc, char * argv[]) {
	char * first[] = {
		"[ Run CUBE ]",
	};
	int f = sizeof(first) / sizeof(first[0]);
	srand(time(NULL));
	char * option_1_a = first[rand() % f];
	char * option_1_b = first[rand() % f];
	char * option_1_c = first[rand() % f];
	char * option_a = first[rand() % f];
	char * option_b = first[rand() % f];
	char * option_c = first[rand() % f];
	char * option[] = {
		"STR : +9%",		
		"DEX : +9%",
		"INT : +9%",					
		"LUK : +9%",
		"공격력 : +9%",
		"마력 : +9%",
		"크리티컬 확률 : +9%", 
		"데미지 : +9%",					 				
		"올스탯 : +6%",									 
		"몬스터 방어율 무시 : +30%",
		"보스 몬스터 공격 시 데미지 : +20%",
		"보스 몬스터 공격 시 데미지 : +30%",
		"STR : 12%",
		"DEX : +12%",
		"INT : +12%",					
		"LUK : +12%",
		"공격력 : +12%",
		"마력 : +12%",
		"크리티컬 확률 : +12%", 
		"데미지 : +12%",					 				
		"올스탯 : +9%",						
	    	"캐릭터 기준 10레벨 당 공격력 : +1",
		"캐릭터 기준 10레벨 당 마력 : +1",				
	    	"몬스터 방어율 무시 : +35%",
		"몬스터 방어율 무시 : +40%",
		"보스 몬스터 공격 시 데미지 : +35%",					
		"보스 몬스터 공격 시 데미지 : +40%",
	};
	int m = sizeof(option) / sizeof(option[0]);
	srand(time(NULL));
	char * option_d;
	char * option_e;
	char * option_f;
	char * temp_1;
	char * temp_2;
	char * temp_3;
	char * option_1[] = {
		"최대 HP : +7%",
		"최대 MP : +7%",					
		"공격력 : 9%",
		"마력 : +9%",
		"크리티컬 확률 : +9%", 															
		"STR : +9%",		
		"DEX : +9%",
		"INT : +9%",					
		"LUK : +9%",
		"데미지 : +9%",					 				
		"올스탯 : +6%",					
		"캐릭터 기준 10레벨 당 STR : +1",
		"캐릭터 기준 10레벨 당 DEX : +1",
		"캐릭터 기준 10레벨 당 INT : +1",
		"캐릭터 기준 10레벨 당 LUK : +1",
		"공격 시 15% 확률로 95의 HP 회복",
		"공격 시 15% 확률로 95의 MP 회복",
		"몬스터 방어율 무시 : +4%",
		"보스 몬스터 공격 시 데미지 : +12%",
		"최대 HP : +10%",
		"최대 MP : +10%",
		"공격력 : 12%",
		"마력 : +12%",
		"크리티컬 확률 : +12%",
		"STR : 12%",
		"DEX : +12%",
		"INT : +12%",					
		"LUK : +12%",
		"데미지 : +12%",					 				
		"올스탯 : +9%",
		"캐릭터 기준 10레벨 당 STR : +2",
		"캐릭터 기준 10레벨 당 DEX : +2",
		"캐릭터 기준 10레벨 당 INT : +2",
		"캐릭터 기준 10레벨 당 LUK : +2",
		"캐릭터 기준 10레벨 당 공격력 : +2",
		"캐릭터 기준 10레벨 당 마력 : +2",
		"상태 이상 내성 : +5",
		"몬스터 방어율 무시 : +5%",
		"보스 몬스터 공격 시 데미지 : +18%",
	};
	int mm = sizeof(option_1) / sizeof(option_1[0]);
	srand(time(NULL));
	long long int cash = 0;
	long long int cube = 0;
	long long int cash_1 = 0;
	long long int cube_1 = 0;
	MessageBox( NULL, "이 게임은 (주)넥슨 게임 '메이플스토리'의 \n\n컨텐츠를 기반으로 제작되었습니다.", "메이플 가상 무기 강화 시스템", MB_OK );
	MessageBox( NULL, "             개발자 : ENNP", "메이플 가상 무기 강화 시스템", MB_OK );
	char aa[1000];
	intro:
	snprintf(aa,sizeof(aa),"★★★★★ ★★★★★ ★★★★★\n       ★★★★★  ★★☆☆☆\n\n    [ 아케인세이드 데스페라도 ]\n\nREQ LEV : 200\n\n무기분류 : 데스페라도(한손무기)\n공격속도 : 보통\nSTR : +203(60 + 143)\nDEX : +223(60 + 163)\nINT : +103(0 + 103)\nLUK : +103(0 + 103)\n공격력 : +523(255 + 268)\n보스 몬스터 공격 시 데미지 : +30%%\n몬스터 방어율 무시 : +20%%\n\n\n[R] 잠재옵션\n%s\n%s\n%s\n\n\n[R] 에디셔널 잠재옵션\n%s\n%s\n%s\n\n\n-----------------------------\n\n블랙 큐브 : %lld \\ ( 2200 \\ / %lld개 )\n\n에디셔널 큐브 : %lld \\ ( 2400 \\ / %lld개 )\n\n<예>블랙 큐브\t<아니요>에디셔널 큐브\t<취소>종료하기",option_a,option_b,option_c,option_1_a,option_1_b,option_1_c,cash,cube,cash_1,cube_1);
	int b = MessageBox( NULL, aa, "메이플 가상 무기 강화 시스템", MB_YESNOCANCEL );
	if( b == IDYES ) {
		int d1_1 = MessageBox( NULL,"한번더 잠재능력을 재설정\n        하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( d1_1 == IDNO ) {
			goto intro;
		}
		int d1_2 = MessageBox( NULL,"아케인세이드 데스페라도 감정 시\n        2,200원이 소모됩니다.\n          감정하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( d1_2 == IDNO ) {
			goto intro;
		}
		int d1_3 = MessageBox( NULL,"블랙 큐브 사용시, 등급이 유지되거나\n 상승할 수 있고 사용된 블랙 큐브는\n   사라집니다. 정말로 아케인세이드\n    데스페라도 아이템에 블랙큐브를\n            사용하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( d1_3 == IDNO ) {
			goto intro;
		}
		option_d = option[rand() % m];
		option_e = option[rand() % m];
		option_f = option[rand() % m];
		cash = cash + 2200;
		cube = cube + 1;
		char c[1000];
		random:
		snprintf(c,sizeof(c),"아이템의 잠재능력을\n재설정합니다\n\n\n남은 개수 : 00(무한)개\n\n\n-----------------------------\n\n [ 아케인세이드 데스페라도 ]\n\n-----------------------------\n\n\n[ BEFORE ]\n\n\t레전드리\n\n%s\n%s\n%s\n\n-----------------------------\n\n[ AFTER ]\n\n\t레전드리\n\n%s\n%s\n%s\n\n-----------------------------\n\n블랙 큐브 : %lld \\ ( 2200 \\ / %lld개 )\n\n<예>한 번 더 사용하기\n\n<아니요>BEFORE 옵션 선택\n\n<취소>AFTER 옵션 선택",option_a,option_b,option_c,option_d,option_e,option_f,cash,cube);
		int d = MessageBox( NULL, c, "메이플 가상 무기 강화 시스템", MB_YESNOCANCEL );
		if ( d == IDYES ) {
			// Sleep(1000);
			int d2_1 = MessageBox( NULL,"한번더 잠재능력을 재설정\n        하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( d2_1 == IDNO ) {
				goto random;
			}
			int d2_2 = MessageBox( NULL,"아케인세이드 데스페라도 감정 시\n        2,200원이 소모됩니다.\n          감정하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( d2_2 == IDNO ) {
				goto random;
			}
			int d2_3 = MessageBox( NULL,"블랙 큐브 사용시, 등급이 유지되거나\n 상승할 수 있고 사용된 블랙 큐브는\n   사라집니다. 정말로 아케인세이드\n    데스페라도 아이템에 블랙큐브를\n            사용하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( d2_3 == IDNO ) {
				goto random;
			}
			option_d = option[rand() % m];
			option_e = option[rand() % m];
			option_f = option[rand() % m];
			cash = cash + 2200;
			cube = cube + 1;
			goto random;
		} else if ( d == IDNO) {
			
			int d4 = MessageBox( NULL,"정말로 BEFORE에 있는 잠재능력을\n         적용시키겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( d4 == IDYES ) {

				goto intro;
				
			} else if ( d4 == IDNO ) {
				
				goto random;
			}
			
		} else if ( d == IDCANCEL ) {
			int d4 = MessageBox( NULL,"정말로 AFTER에 있는 잠재능력을\n         적용시키겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( d4 == IDYES ) {
				temp_1 = option_d;
				temp_2 = option_e;
				temp_3 = option_f;
				option_a = temp_1;
				option_b = temp_2;
				option_c = temp_3;
				goto intro;
			} else if ( d4 == IDNO ) {
				goto random;
			}
		}
	} else if ( b == IDNO ) {
		int e1_1 = MessageBox( NULL,"한번더 잠재능력을 재설정\n        하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( e1_1 == IDNO ) {
			goto intro;
		}
		int e1_2 = MessageBox( NULL,"아케인세이드 데스페라도 감정 시\n        2,200원이 소모됩니다.\n          감정하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( e1_2 == IDNO ) {
			goto intro;
		}
		int e1_3 = MessageBox( NULL,"에디셔녈 큐브 사용시, 등급이 유지되거나\n    상승할 수 있고 사용된 블랙 큐브는\n      사라집니다. 정말로 아케인세이드\n       데스페라도 아이템에 블랙큐브를\n                사용하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( e1_3 == IDNO ) {
			goto intro;
		}
		option_1_a = option_1[rand() % mm];
		option_1_b = option_1[rand() % mm];
		option_1_c = option_1[rand() % mm];
		cash_1 = cash_1 + 2200;
		cube_1 = cube_1 + 1;
		char cc[1000];
		random_1:
		snprintf(cc,sizeof(cc),"아이템의 잠재능력을 재설정합니다\n\n\n[ RESULT ]\n\n\t\t레전드리\n%s\n%s\n%s\n\n-----------------------------\n\n에디셔널 큐브 : %lld \\ ( 2400 \\ / %lld개 )\n\n<예>한 번 더 사용하기\n\n<아니요>확인\n\n",option_1_a,option_1_b,option_1_c,cash_1,cube_1);
		int dd = MessageBox( NULL, cc, "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( dd == IDYES ) {
			int e2_1 = MessageBox( NULL,"한번더 잠재능력을 재설정\n             하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( e2_1 == IDNO ) {
				goto intro;
			}
			int e2_2 = MessageBox( NULL,"아케인세이드 데스페라도 감정 시\n        2,200원이 소모됩니다.\n          감정하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( e2_2 == IDNO ) {
				goto intro;
			}
			int e2_3 = MessageBox( NULL,"에디셔녈 큐브 사용시, 등급이 유지되거나\n 상승할 수 있고 사용된 블랙 큐브는\n   사라집니다. 정말로 아케인세이드\n    데스페라도 아이템에 블랙큐브를\n            사용하시겠습니까?", "메이플 가상 무기 강화 시스템", MB_YESNO );
			if ( e2_3 == IDNO ) {
				goto intro;
			}
			option_1_a = option_1[rand() % mm];
			option_1_b = option_1[rand() % mm];
			option_1_c = option_1[rand() % mm];
			cash_1 = cash_1 + 2400;
			cube_1 = cube_1 + 1;
			goto random_1;
		} else if ( dd == IDNO) {
			temp_1 = option_d;
			temp_2 = option_e;
			temp_3 = option_f;
			option_a = temp_1;
			option_b = temp_2;
			option_c = temp_3;
			goto intro;
		}
	} else if ( b == IDCANCEL ) {
		char cc[1000];
		snprintf(cc,sizeof(cc),"본 게임은 저장되지 않습니다. 캡처 하셨나요?");
		int dd = MessageBox( NULL, cc, "메이플 가상 무기 강화 시스템", MB_YESNO );
		if ( dd == IDNO ) {
			goto intro;
		} else if ( dd == IDYES ) {
			char ccc[1000];
			snprintf(ccc,sizeof(ccc),"게임을 종료합니다. 이용해주셔서  감사합니다.");
			MessageBox( NULL, ccc, "메이플 가상 무기 강화 시스템", MB_OK );
		}
	}
	return 0;
}
