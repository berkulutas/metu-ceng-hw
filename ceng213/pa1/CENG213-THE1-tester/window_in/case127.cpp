#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab A = Tab("n", "sss","kk");
wind->isEmpty();
Tab I = Tab("p", "mm","ll");
wind->moveActiveTabTo(1);
Tab C = Tab("xx", "bb","j");
wind->print();
Tab U = Tab("ii", "ddd","vvv");
wind->isEmpty();
Tab T = Tab("dd", "yyy","s");
wind->moveActiveTabTo(1);
Tab L = Tab("zzz", "qq","vv");
wind->isEmpty();
Tab N = Tab("g", "i","uu");
wind->print();
wind->print();
Tab F = Tab("zzz", "g","u");
wind->isEmpty();
Tab P = Tab("zz", "iii","pp");
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(2);
Tab H = Tab("l", "hh","m");
wind->moveActiveTabTo(2);
Tab Q = Tab("ww", "ggg","vv");
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(1);
Tab D = Tab("rr", "vvv","ddd");
wind->closeTab();
wind->changeActiveTabTo(3);
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
Tab K = Tab("www", "e","ff");
wind->getActiveTab();
Tab J = Tab("nnn", "ii","t");
wind->isEmpty();
Tab O = Tab("vv", "nnn","uuu");
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(4);
Tab S = Tab("e", "ss","d");
wind->print();
Tab E = Tab("x", "kkk","zz");
wind->moveActiveTabTo(1);
Tab V = Tab("r", "ii","kk");
wind->newTab(A);
wind->newTab(C);
Tab B = Tab("qq", "sss","aaa");
wind->print();
Tab G = Tab("u", "pp","vv");
wind->moveActiveTabTo(5);
wind->isEmpty();
Tab Y = Tab("jjj", "aaa","q");
wind->changeActiveTabTo(3);
wind->closeTab();
wind->closeTab();
wind->print();
wind->newTab(B);
wind->closeTab();
wind->getActiveTab();
wind->newTab(D);
wind->print();
Tab M = Tab("nnn", "cc","u");
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->newTab(E);
wind->print();
wind->print();
wind->closeTab();
wind->print();
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
Tab R = Tab("d", "mmm","xx");
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->getActiveTab();
Tab Z = Tab("nn", "h","j");
wind->print();
wind->closeTab();
wind->newTab(F);
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(0);
wind->print();
wind->changeActiveTabTo(2);
Tab W = Tab("iii", "dd","nnn");
wind->print();
wind->moveActiveTabTo(2);
wind->closeTab();
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->print();
wind->newTab(G);
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->newTab(H);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->closeTab();
Tab X = Tab("iii", "r","gg");
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->isEmpty();
wind->newTab(I);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(0);
wind->newTab(J);
wind->newTab(K);
delete wind;
}
	return 0;
};