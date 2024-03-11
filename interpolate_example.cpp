decision(x,y,z)

x->sur
y->env
z->mate

//idk where u want to use these so ill just put logic and numbers for graph
int getSur(){
    int health_value = getParamValue("Health");
    if (health_value >= 100) {return 100;}
    else{return health_value;}
}

int getEnv(){
    int hunger_value = getParamValue("Hunger");

    if (hunger_value >= 100) {return 100;}
    else{return hunger_value;}
}

int getMate(){
    if (!(mateCooldown))
        {return 80;}
    else{return 0;}
}



eat,!attack,!walk,walkseek,walkescape, mate.



eat 
5 0 10 30
5 25 10 35
5 50 10 45
10 75 10 50
10 100 10 60



attack
//possibly don not need , since attack are instant when close to other animal


walkseek
65 0 10 30
65 25 10 35
65 50 10 40
65 75 10 50
70 100 10 60

walkescape
95 0 10 90
95 25 10 75
95 50 10 65
95 75 10 50
95 100 10 40
35 0 10 35
35 25 10 40
35 50 10 45
35 75 10 50
40 100 10 50


getMate
100 100 70 50
92 92 72 45
85 85 75 40
77 77 77 35
70 70 80 30
60 60 85 20

