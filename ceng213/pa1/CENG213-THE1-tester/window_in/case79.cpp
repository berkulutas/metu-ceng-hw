#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->closeTab();
Tab W = Tab("uuu", "yyy","kk");
wind->isEmpty();
Tab V = Tab("a", "z","cc");
wind->print();
wind->isEmpty();
Tab B = Tab("tt", "s","d");
wind->closeTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(0);
Tab U = Tab("q", "x","nn");
wind->print();
Tab I = Tab("rr", "aa","aa");
wind->getActiveTab();
Tab L = Tab("h", "g","s");
wind->closeTab();
Tab R = Tab("nn", "zzz","pp");
wind->getActiveTab();
Tab G = Tab("bb", "aaa","z");
wind->moveActiveTabTo(3);
Tab Q = Tab("ttt", "kk","d");
wind->changeActiveTabTo(4);
Tab X = Tab("yyy", "hh","dd");
wind->print();
Tab Z = Tab("kkk", "qq","ppp");
wind->getActiveTab();
Tab M = Tab("yy", "b","m");
wind->getActiveTab();
wind->closeTab();
Tab J = Tab("s", "bbb","ddd");
wind->closeTab();
Tab P = Tab("g", "xxx","aa");
wind->moveActiveTabTo(4);
Tab F = Tab("ww", "mm","rrr");
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(2);
Tab D = Tab("ee", "k","kkk");
wind->print();
Tab Y = Tab("oo", "zzz","mmm");
wind->print();
Tab C = Tab("ss", "uu","hhh");
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
Tab N = Tab("rrr", "rrr","i");
wind->moveActiveTabTo(2);
Tab O = Tab("pp", "jjj","i");
wind->isEmpty();
wind->closeTab();
wind->newTab(B);
wind->print();
wind->moveActiveTabTo(2);
Tab K = Tab("uuu", "gg","xxx");
wind->getActiveTab();
wind->newTab(C);
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->changeActiveTabTo(0);
Tab A = Tab("ee", "ee","r");
wind->print();
wind->newTab(A);
wind->print();
wind->newTab(D);
wind->print();
wind->changeActiveTabTo(0);
wind->print();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(F);
Tab E = Tab("l", "t","a");
wind->newTab(E);
wind->newTab(G);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->newTab(I);
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->print();
Tab T = Tab("rr", "r","jj");
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->newTab(J);
wind->closeTab();
wind->isEmpty();
Tab S = Tab("i", "hh","sss");
wind->moveActiveTabTo(1);
wind->print();
wind->moveActiveTabTo(1);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->newTab(K);
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->newTab(L);
Tab H = Tab("f", "p","s");
wind->closeTab();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(2);
wind->newTab(H);
wind->newTab(M);
wind->print();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(3);
delete wind;
}
	return 0;
};