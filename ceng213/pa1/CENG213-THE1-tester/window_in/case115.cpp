#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
Tab X = Tab("c", "gg","www");
wind->isEmpty();
Tab T = Tab("vvv", "nn","z");
wind->moveActiveTabTo(0);
Tab U = Tab("e", "u","s");
wind->newTab(T);
Tab P = Tab("u", "iii","ii");
wind->changeActiveTabTo(2);
Tab F = Tab("nnn", "t","zz");
wind->newTab(F);
wind->changeActiveTabTo(5);
Tab Z = Tab("sss", "f","y");
wind->moveActiveTabTo(2);
Tab G = Tab("tt", "gg","s");
wind->isEmpty();
Tab C = Tab("jjj", "bbb","sss");
wind->newTab(C);
wind->print();
Tab A = Tab("t", "ss","qq");
wind->isEmpty();
wind->closeTab();
Tab Q = Tab("zzz", "ff","dd");
wind->changeActiveTabTo(1);
Tab W = Tab("www", "dd","rrr");
wind->newTab(A);
Tab R = Tab("yy", "fff","oo");
wind->isEmpty();
wind->moveActiveTabTo(2);
Tab L = Tab("pp", "zz","r");
wind->newTab(G);
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(4);
Tab S = Tab("nn", "vvv","a");
wind->print();
Tab M = Tab("aaa", "xx","x");
wind->closeTab();
Tab J = Tab("pp", "jjj","pp");
wind->moveActiveTabTo(5);
wind->closeTab();
Tab Y = Tab("x", "nn","z");
wind->newTab(J);
wind->newTab(L);
Tab K = Tab("ggg", "b","t");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->newTab(K);
wind->changeActiveTabTo(4);
Tab E = Tab("kkk", "a","j");
wind->isEmpty();
wind->getActiveTab();
Tab H = Tab("zz", "iii","ii");
wind->isEmpty();
wind->getActiveTab();
wind->newTab(E);
wind->isEmpty();
wind->newTab(H);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(4);
Tab I = Tab("qqq", "lll","iii");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(I);
wind->changeActiveTabTo(2);
wind->print();
wind->newTab(M);
wind->closeTab();
wind->print();
wind->isEmpty();
Tab B = Tab("mmm", "i","vvv");
wind->getActiveTab();
wind->moveActiveTabTo(2);
Tab V = Tab("dd", "x","vvv");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->newTab(B);
wind->closeTab();
wind->newTab(P);
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
wind->newTab(Q);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->newTab(R);
wind->print();
wind->changeActiveTabTo(0);
wind->closeTab();
wind->getActiveTab();
Tab N = Tab("zz", "nn","ll");
wind->changeActiveTabTo(0);
wind->closeTab();
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->print();
wind->changeActiveTabTo(0);
Tab O = Tab("xx", "qq","zz");
wind->changeActiveTabTo(3);
wind->print();
wind->newTab(N);
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(O);
wind->newTab(S);
Tab D = Tab("vvv", "iii","qq");
wind->closeTab();
wind->print();
delete wind;
}
	return 0;
};