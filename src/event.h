// event.h

#ifndef _EVENT_H_
#define	_EVENT_H_



class CInstanceManager;


#define MAXEVENT	100

// Ev�nements.

enum EventMsg
{
	EVENT_NULL				= 0,

	EVENT_QUIT				= 1,
	EVENT_FRAME				= 2,
	EVENT_LBUTTONDOWN		= 3,
	EVENT_RBUTTONDOWN		= 4,
	EVENT_LBUTTONUP			= 5,
	EVENT_RBUTTONUP			= 6,
	EVENT_MOUSEMOVE			= 7,
	EVENT_KEYDOWN			= 8,
	EVENT_KEYUP				= 9,
	EVENT_CHAR				= 10,
	EVENT_FOCUS				= 11,

	EVENT_UPDINTERFACE		= 20,
	EVENT_WIN				= 30,
	EVENT_LOST				= 31,

	EVENT_BUTTON_OK			= 40,
	EVENT_BUTTON_CANCEL		= 41,
	EVENT_BUTTON_QUIT		= 44,

	EVENT_BUTTON0			= 50,
	EVENT_BUTTON1			= 51,
	EVENT_BUTTON2			= 52,
	EVENT_BUTTON3			= 53,
	EVENT_BUTTON4			= 54,
	EVENT_BUTTON5			= 55,
	EVENT_BUTTON6			= 56,
	EVENT_BUTTON7			= 57,
	EVENT_BUTTON8			= 58,
	EVENT_BUTTON9			= 59,
	EVENT_BUTTON10			= 60,
	EVENT_BUTTON11			= 61,
	EVENT_BUTTON12			= 62,
	EVENT_BUTTON13			= 63,
	EVENT_BUTTON14			= 64,
	EVENT_BUTTON15			= 65,
	EVENT_BUTTON16			= 66,
	EVENT_BUTTON17			= 67,
	EVENT_BUTTON18			= 68,
	EVENT_BUTTON19			= 69,

	EVENT_EDIT0				= 70,
	EVENT_EDIT1				= 71,
	EVENT_EDIT2				= 72,
	EVENT_EDIT3				= 73,
	EVENT_EDIT4				= 74,
	EVENT_EDIT5				= 75,
	EVENT_EDIT6				= 76,
	EVENT_EDIT7				= 77,
	EVENT_EDIT8				= 78,
	EVENT_EDIT9				= 79,

	EVENT_WINDOW0			= 80,	// tableau de bord en bas
	EVENT_WINDOW1			= 81,	// CDisplayText
	EVENT_WINDOW2			= 82,
	EVENT_WINDOW3			= 83,
	EVENT_WINDOW4			= 84,	// setup
	EVENT_WINDOW5			= 85,
	EVENT_WINDOW6			= 86,
	EVENT_WINDOW7			= 87,
	EVENT_WINDOW8			= 88,
	EVENT_WINDOW9			= 89,	// dialogue

	EVENT_LABEL0			= 90,
	EVENT_LABEL1			= 91,
	EVENT_LABEL2			= 92,
	EVENT_LABEL3			= 93,
	EVENT_LABEL4			= 94,
	EVENT_LABEL5			= 95,
	EVENT_LABEL6			= 96,
	EVENT_LABEL7			= 97,
	EVENT_LABEL8			= 98,
	EVENT_LABEL9			= 99,
	EVENT_LABEL10			= 100,
	EVENT_LABEL11			= 101,
	EVENT_LABEL12			= 102,
	EVENT_LABEL13			= 103,
	EVENT_LABEL14			= 104,
	EVENT_LABEL15			= 105,
	EVENT_LABEL16			= 106,
	EVENT_LABEL17			= 107,
	EVENT_LABEL18			= 108,
	EVENT_LABEL19			= 109,

	EVENT_LIST0				= 110,
	EVENT_LIST1				= 111,
	EVENT_LIST2				= 112,
	EVENT_LIST3				= 113,
	EVENT_LIST4				= 114,
	EVENT_LIST5				= 115,
	EVENT_LIST6				= 116,
	EVENT_LIST7				= 117,
	EVENT_LIST8				= 118,
	EVENT_LIST9				= 119,

	EVENT_INFO0				= 120,
	EVENT_INFO1				= 121,
	EVENT_INFO2				= 122,
	EVENT_INFO3				= 123,
	EVENT_INFO4				= 124,
	EVENT_INFO5				= 125,
	EVENT_INFO6				= 126,
	EVENT_INFO7				= 127,
	EVENT_INFO8				= 128,
	EVENT_INFO9				= 129,
	EVENT_INFO10			= 130,
	EVENT_INFO11			= 131,
	EVENT_INFO12			= 132,
	EVENT_INFO13			= 133,
	EVENT_INFO14			= 134,
	EVENT_INFO15			= 135,
	EVENT_INFO16			= 136,
	EVENT_INFO17			= 137,
	EVENT_INFO18			= 138,
	EVENT_INFO19			= 139,

	EVENT_ARRAY0			= 140,
	EVENT_ARRAY1			= 141,
	EVENT_ARRAY2			= 142,
	EVENT_ARRAY3			= 143,
	EVENT_ARRAY4			= 144,
	EVENT_ARRAY5			= 145,
	EVENT_ARRAY6			= 146,
	EVENT_ARRAY7			= 147,
	EVENT_ARRAY8			= 148,
	EVENT_ARRAY9			= 149,

	EVENT_MENU0				= 150,
	EVENT_MENU1				= 151,
	EVENT_MENU2				= 152,
	EVENT_MENU3				= 153,
	EVENT_MENU4				= 154,
	EVENT_MENU5				= 155,
	EVENT_MENU6				= 156,
	EVENT_MENU7				= 157,
	EVENT_MENU8				= 158,
	EVENT_MENU9				= 159,
	EVENT_MENU10			= 160,
	EVENT_MENU11			= 161,
	EVENT_MENU12			= 162,
	EVENT_MENU13			= 163,
	EVENT_MENU14			= 164,
	EVENT_MENU15			= 165,
	EVENT_MENU16			= 166,
	EVENT_MENU17			= 167,
	EVENT_MENU18			= 168,
	EVENT_MENU19			= 169,
	EVENT_LABEL_SIGN		= 170,

	EVENT_TOOLTIP			= 200,

	EVENT_DIALOG_OK			= 300,
	EVENT_DIALOG_CANCEL		= 301,
	EVENT_DIALOG_LABEL		= 302,
	EVENT_DIALOG_LABEL1		= 303,
	EVENT_DIALOG_LABEL2		= 304,
	EVENT_DIALOG_LABEL3		= 305,
	EVENT_DIALOG_EDIT1		= 306,
	EVENT_DIALOG_EDIT2		= 307,
	EVENT_DIALOG_EDIT3		= 308,

	EVENT_INTERFACE_PUZZLE	= 400,
	EVENT_INTERFACE_DEFI	= 401,
	EVENT_INTERFACE_USER	= 402,
	EVENT_INTERFACE_PROTO	= 403,
	EVENT_INTERFACE_NAME	= 405,
	EVENT_INTERFACE_SETUP	= 406,
	EVENT_INTERFACE_QUIT	= 407,
	EVENT_INTERFACE_BACK	= 408,
	EVENT_INTERFACE_AGAIN	= 409,
	EVENT_INTERFACE_ABORT	= 410,
	EVENT_INTERFACE_TERM	= 411,
	EVENT_INTERFACE_OK		= 412,

	EVENT_INTERFACE_PLAY	= 420,
	EVENT_INTERFACE_EDIT	= 421,
	EVENT_INTERFACE_LIST	= 422,
	EVENT_INTERFACE_IMAGE	= 423,
	EVENT_INTERFACE_RESUME	= 424,
	EVENT_INTERFACE_RESOK	= 425,
	EVENT_INTERFACE_NEW		= 426,
	EVENT_INTERFACE_DELETE	= 427,
	EVENT_INTERFACE_RENAME	= 428,
	EVENT_INTERFACE_EXPORT	= 429,
	EVENT_INTERFACE_IMPORT	= 430,

	EVENT_INTERFACE_SETUPd	= 431,
	EVENT_INTERFACE_SETUPg	= 432,
	EVENT_INTERFACE_SETUPp	= 433,
	EVENT_INTERFACE_SETUPc	= 434,
	EVENT_INTERFACE_SETUPs	= 435,

	EVENT_INTERFACE_RESOL	= 441,
	EVENT_INTERFACE_FULL	= 442,
	EVENT_INTERFACE_APPLY	= 443,

	EVENT_INTERFACE_SHADOW		= 450,
	EVENT_INTERFACE_DIRTY		= 451,
	EVENT_INTERFACE_SUNBEAM		= 452,
	EVENT_INTERFACE_LENSFLARE	= 453,
	EVENT_INTERFACE_DECOR		= 454,
	EVENT_INTERFACE_DETAIL		= 455,
	EVENT_INTERFACE_METEO		= 456,
	EVENT_INTERFACE_AMBIANCE	= 457,
	EVENT_INTERFACE_EXPLOVIB	= 458,
	EVENT_INTERFACE_SPEEDSCH	= 459,
	EVENT_INTERFACE_SPEEDSCV	= 460,
	EVENT_INTERFACE_MOUSESCROLL	= 461,
	EVENT_INTERFACE_INVSCH		= 462,
	EVENT_INTERFACE_INVSCV		= 463,
	EVENT_INTERFACE_MOVIE		= 464,
	EVENT_INTERFACE_HELP		= 465,
	EVENT_INTERFACE_TOOLTIPS	= 466,
	EVENT_INTERFACE_NICEMOUSE	= 467,
	EVENT_INTERFACE_ACCEL		= 468,
	EVENT_INTERFACE_VOLBLUPI	= 469,
	EVENT_INTERFACE_VOLSOUND	= 470,
	EVENT_INTERFACE_VOLAMBIANCE	= 471,
	EVENT_INTERFACE_SOUND3D		= 472,

	EVENT_INTERFACE_PREV	= 480,
	EVENT_INTERFACE_NEXT	= 481,
	EVENT_INTERFACE_EXIT	= 482,

	EVENT_INTERFACE_KINFO1	= 500,
	EVENT_INTERFACE_KINFO2	= 501,
	EVENT_INTERFACE_KGROUP	= 502,
	EVENT_INTERFACE_KSCROLL	= 503,
	EVENT_INTERFACE_KDEF	= 504,
	EVENT_INTERFACE_KLEFT	= 505,
	EVENT_INTERFACE_KRIGHT	= 506,
	EVENT_INTERFACE_KUP		= 507,
	EVENT_INTERFACE_KDOWN	= 508,
	EVENT_INTERFACE_KROTCW	= 509,
	EVENT_INTERFACE_KROTCCW	= 510,
	EVENT_INTERFACE_KSTOP	= 511,
	EVENT_INTERFACE_KQUIT	= 512,
	EVENT_INTERFACE_KHELP	= 513,

	EVENT_INTERFACE_MIN		= 540,
	EVENT_INTERFACE_NORM	= 541,
	EVENT_INTERFACE_MAX		= 542,

	EVENT_INTERFACE_SILENT	= 550,
	EVENT_INTERFACE_NOISY	= 551,

	EVENT_INTERFACE_GLINTl	= 570,
	EVENT_INTERFACE_GLINTr	= 571,
	EVENT_INTERFACE_GLINTu	= 572,
	EVENT_INTERFACE_GLINTb	= 573,

	EVENT_INTERFACE_NEDIT	= 580,
	EVENT_INTERFACE_NLIST	= 581,
	EVENT_INTERFACE_NOK		= 582,
	EVENT_INTERFACE_NCREATE	= 583,
	EVENT_INTERFACE_NDELETE	= 584,

	EVENT_INTERFACE_UNDO	= 600,
	EVENT_INTERFACE_STOP	= 601,
	EVENT_INTERFACE_SIGN	= 602,

	EVENT_INTERFACE_EXPORTdefi	= 610,
	EVENT_INTERFACE_EXPORTdoc	= 611,

	EVENT_LEVEL111			= 700,
	EVENT_LEVEL112			= 701,
	EVENT_LEVEL113			= 702,
	EVENT_LEVEL114			= 703,
	EVENT_LEVEL121			= 704,
	EVENT_LEVEL122			= 705,
	EVENT_LEVEL123			= 706,
	EVENT_LEVEL124			= 707,
	EVENT_LEVEL131			= 708,
	EVENT_LEVEL132			= 709,
	EVENT_LEVEL133			= 710,
	EVENT_LEVEL134			= 711,
	EVENT_LEVEL141			= 712,
	EVENT_LEVEL142			= 713,
	EVENT_LEVEL143			= 714,
	EVENT_LEVEL144			= 715,
	EVENT_LEVEL211			= 716,
	EVENT_LEVEL212			= 717,
	EVENT_LEVEL213			= 718,
	EVENT_LEVEL214			= 719,
	EVENT_LEVEL221			= 720,
	EVENT_LEVEL222			= 721,
	EVENT_LEVEL223			= 722,
	EVENT_LEVEL224			= 723,
	EVENT_LEVEL231			= 724,
	EVENT_LEVEL232			= 725,
	EVENT_LEVEL233			= 726,
	EVENT_LEVEL234			= 727,
	EVENT_LEVEL241			= 728,
	EVENT_LEVEL242			= 729,
	EVENT_LEVEL243			= 730,
	EVENT_LEVEL244			= 731,
	EVENT_LEVEL311			= 732,
	EVENT_LEVEL312			= 733,
	EVENT_LEVEL313			= 734,
	EVENT_LEVEL314			= 735,
	EVENT_LEVEL321			= 736,
	EVENT_LEVEL322			= 737,
	EVENT_LEVEL323			= 738,
	EVENT_LEVEL324			= 739,
	EVENT_LEVEL331			= 740,
	EVENT_LEVEL332			= 741,
	EVENT_LEVEL333			= 742,
	EVENT_LEVEL334			= 743,
	EVENT_LEVEL341			= 744,
	EVENT_LEVEL342			= 745,
	EVENT_LEVEL343			= 746,
	EVENT_LEVEL344			= 747,

	EVENT_IMAGE110			= 750,
	EVENT_IMAGE120			= 751,
	EVENT_IMAGE130			= 752,
	EVENT_IMAGE140			= 753,
	EVENT_IMAGE210			= 754,
	EVENT_IMAGE220			= 755,
	EVENT_IMAGE230			= 756,
	EVENT_IMAGE240			= 757,
	EVENT_IMAGE310			= 758,
	EVENT_IMAGE320			= 759,
	EVENT_IMAGE330			= 760,
	EVENT_IMAGE340			= 761,

	EVENT_GROUP100			= 762,
	EVENT_GROUP200			= 763,
	EVENT_GROUP300			= 764,

	EVENT_LOCK100			= 765,
	EVENT_LOCK200			= 766,
	EVENT_LOCK300			= 767,

	EVENT_LABEL100			= 768,
	EVENT_LABEL200			= 769,
	EVENT_LABEL300			= 770,

	EVENT_PUZZLE_SCROLL		= 771,
	EVENT_PUZZLE_LINK		= 772,
	EVENT_PUZZLE_MOVE1		= 773,
	EVENT_PUZZLE_MOVE2		= 774,

	EVENT_EDIT_OBJECT		= 780,
	EVENT_EDIT_GROUND		= 781,
	EVENT_EDIT_WATER		= 782,
	EVENT_EDIT_CLEAR		= 783,
	EVENT_EDIT_MENU1		= 784,
	EVENT_EDIT_MENU2		= 785,
	EVENT_EDIT_MENU3		= 786,
	EVENT_EDIT_MENU4		= 787,
	EVENT_EDIT_MENU5		= 788,
	EVENT_EDIT_MENU6		= 789,
	EVENT_EDIT_MENU7		= 790,
	EVENT_EDIT_MENU8		= 791,
	EVENT_EDIT_MENU9		= 792,
	EVENT_EDIT_INFO			= 793,

	EVENT_DT_GROUP0			= 800,
	EVENT_DT_GROUP1			= 801,
	EVENT_DT_GROUP2			= 802,
	EVENT_DT_GROUP3			= 803,
	EVENT_DT_GROUP4			= 804,
	EVENT_DT_LABEL0			= 810,
	EVENT_DT_LABEL1			= 811,
	EVENT_DT_LABEL2			= 812,
	EVENT_DT_LABEL3			= 813,
	EVENT_DT_LABEL4			= 814,

	EVENT_CMD				= 900,
	EVENT_SPEED				= 901,

	EVENT_OBJECT_MAP		= 1370,
	EVENT_OBJECT_MAPZOOM	= 1371,
	EVENT_OBJECT_EDITLOCK	= 1372,

	EVENT_USER				= 10000,
	EVENT_FORCE_DWORD		= 0x7fffffff
};

typedef struct
{
	EventMsg	event;		// �v�nement (EVENT_*)
	long		param;		// param�tre
	FPOINT		pos;		// position de la souris (0..1)
	float		axeX;		// commande de l'axe X (-1..1) avancer/reculer
	float		axeY;		// commande de l'axe Y (-1..1) tourner
	float		axeZ;		// commande de l'axe Z (-1..1) monter/descendre
	float		axeW;		// commande de l'axe W (-1..1) frain � main
	short		keyState;	// �tat du clavier (KS_*)
	float		rTime;		// temps relatif
}
Event;


#define VK_BUTTON1		(0x100+1)	// joystick button 1
#define VK_BUTTON2		(0x100+2)	// joystick button 2
#define VK_BUTTON3		(0x100+3)	// joystick button 3
#define VK_BUTTON4		(0x100+4)	// joystick button 4
#define VK_BUTTON5		(0x100+5)	// joystick button 5
#define VK_BUTTON6		(0x100+6)	// joystick button 6
#define VK_BUTTON7		(0x100+7)	// joystick button 7
#define VK_BUTTON8		(0x100+8)	// joystick button 8
#define VK_BUTTON9		(0x100+9)	// joystick button 9
#define VK_BUTTON10		(0x100+10)	// joystick button 10
#define VK_BUTTON11		(0x100+11)	// joystick button 11
#define VK_BUTTON12		(0x100+12)	// joystick button 12
#define VK_BUTTON13		(0x100+13)	// joystick button 13
#define VK_BUTTON14		(0x100+14)	// joystick button 14
#define VK_BUTTON15		(0x100+15)	// joystick button 15
#define VK_BUTTON16		(0x100+16)	// joystick button 16
#define VK_BUTTON17		(0x100+17)	// joystick button 17
#define VK_BUTTON18		(0x100+18)	// joystick button 18
#define VK_BUTTON19		(0x100+19)	// joystick button 19
#define VK_BUTTON20		(0x100+20)	// joystick button 20
#define VK_BUTTON21		(0x100+21)	// joystick button 21
#define VK_BUTTON22		(0x100+22)	// joystick button 22
#define VK_BUTTON23		(0x100+23)	// joystick button 23
#define VK_BUTTON24		(0x100+24)	// joystick button 24
#define VK_BUTTON25		(0x100+25)	// joystick button 25
#define VK_BUTTON26		(0x100+26)	// joystick button 26
#define VK_BUTTON27		(0x100+27)	// joystick button 27
#define VK_BUTTON28		(0x100+28)	// joystick button 28
#define VK_BUTTON29		(0x100+29)	// joystick button 29
#define VK_BUTTON30		(0x100+30)	// joystick button 30
#define VK_BUTTON31		(0x100+31)	// joystick button 31
#define VK_BUTTON32		(0x100+32)	// joystick button 32

#define VK_JLEFT		(0x200+1)	// joystick gauche
#define VK_JRIGHT		(0x200+2)	// joystick droite
#define VK_JUP			(0x200+3)	// joystick haut
#define VK_JDOWN		(0x200+4)	// joystick bas

#define VK_WHEELUP		(0x200+10)	// molette souris up
#define VK_WHEELDOWN	(0x200+11)	// molette souris down

#define VK_DEFAULT		(0x200+12)	// action par d�faut


enum KeyRank
{
	KEYRANK_LEFT	= 0,
	KEYRANK_RIGHT	= 1,
	KEYRANK_UP		= 2,
	KEYRANK_DOWN	= 3,
	KEYRANK_ROTCW	= 4,
	KEYRANK_ROTCCW	= 5,
	KEYRANK_STOP	= 6,
	KEYRANK_HELP	= 7,
	KEYRANK_NEAR	= 8,
	KEYRANK_AWAY	= 9,
	KEYRANK_QUIT	= 10,
	KEYRANK_SPEED10	= 11,
	KEYRANK_SPEED15	= 12,
	KEYRANK_SPEED20	= 13,
	KEYRANK_SPEED30	= 14,
};



class CEvent
{
public:
	CEvent(CInstanceManager* iMan);
	~CEvent();

	void	Flush();
	void	MakeEvent(Event &event, EventMsg msg);
	BOOL	AddEvent(const Event &event);
	BOOL	GetEvent(Event &event);

protected:

protected:
	CInstanceManager* m_iMan;

	Event	m_fifo[MAXEVENT];
	int		m_head;
	int		m_tail;
	int		m_total;
};


#endif //_EVENT_H_
