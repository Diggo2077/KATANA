#ifndef HEADERS_H
#define HEADERS_H

#ifdef _WIN32
    #define CLEAR "cls"
#include <windows.h>
#else
    #define CLEAR "clear"
#include <unistd.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    #include <locale.h>
#include <time.h>

// Structs
typedef struct
{
    char language[10];
    float txt_speed;
} Configs;

typedef struct
{
    int armor, health, attack, defense, stamina;
} Armor;

typedef struct
{
    char name[40];
    int level, xp, attributes, ryos, health, bonus_hp, attack, bonus_ttk, bonus, defense, dodge, stamina, bonus_sta;
    int ginseng, elixir, sake, tiger, fenix, dragon, chapter;
    Armor gi;
} Character;

// Saved Data

/*Function Initialization*/

// OPTIONS

void saveConfigs (Configs c);
void saveGame (Character p);
Configs loadConfigs ();
Character loadGame ();
void pauseGame (const Configs *c);
void asciiArt (const Configs *c, int n);
void msleep (float mlseconds);
void speedMenu (Configs *c, Character *p);
void languageMenu (Configs *c, Character *p);
void helpOutput (Configs *c);
void options (Configs *c, Character *p);
int mainMenu (Configs *c, Character *p);

// MAIN STORY TOOLS

int lvl (Configs *c, Character *p);
int xpCalc (Character *p, int n);
int ryosCalc (Character *p, int n);
void showAttributes (Configs *c, Character *p);
void inventory (Configs *c, Character *p);
Armor changeEquip (Armor *equip, int n);
void equipments (Configs *c, Character *p);
void shop (Configs *c, Character *p);
int playerMenu (Configs *c, Character *p);
void cityMenu (Configs *c, Character *p);
void rewards (Configs *c, int n, int m);

// TRAINING TOOLS

Character chooseCharacter (Character *character, Character *p, int n);
Character trainCharacter (Configs *c, Character *character, Character *p);
Character enemyInit (Character *character, char name[], int level, int elixir, int health, int attack, int defense, int stamina);
int trainingMenu (Configs *c, Character *p);
int training (Configs *c, Character *p);

// COMBAT TOOLS

int firstAttack (int stamina01, int stamina02);
int checkStamina (Configs *c, int stamina, int choice);
int criticalChance (int attack);
int damageCalc (Configs *c, int attack, int bonus, int dodge, int half_def);
void damageResult (Configs *c, char name[], char e_name[], int e_health, int damage);
int defenseCalc (Configs *c, char name[], int half_def, int bonus, char e_name[]);
int aiDecision (Configs *c, Character ai, Character player);
void battleMenu (Configs *c, char name[], int health, int elixir, int stamina, int bonus, int e_health, int e_stamina);
int looserMenu (Configs *c, Character *p);
int executeTurn (Configs *c, Character *ttk, Character *def, int isPlayerTurn);
int fightPvP (Configs *c, Character P1, Character P2);
int fightPvE (Configs *c, Character player, Character ai);
int fightStory (Configs *c, Character player, Character ai);
int fightEvE (Configs *c, Character ai1, Character ai2);

//CHAPTERS

void Takeshi (Character *p);
void displayPage (Configs *c, const char *chapter, const char *page);
int fight (Configs *c, Character *p, Character e);
int mainStory (Configs *c, Character *p);

#endif