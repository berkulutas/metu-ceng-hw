#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab H = Tab("kkk", "a","ll");
wind->moveActiveTabTo(1);
Tab P = Tab("uuu", "nn","hhh");
wind->isEmpty();
Tab Z = Tab("g", "q","a");
wind->print();
wind->isEmpty();
Tab U = Tab("kkk", "vv","oo");
wind->getActiveTab();
Tab V = Tab("ll", "oo","xx");
wind->closeTab();
Tab R = Tab("kk", "s","ttt");
wind->print();
Tab K = Tab("ggg", "yyy","kk");
wind->closeTab();
Tab W = Tab("fff", "f","rr");
wind->changeActiveTabTo(5);
wind->closeTab();
wind->moveActiveTabTo(1);
wind->newTab(H);
Tab D = Tab("sss", "b","p");
wind->closeTab();
wind->print();
wind->changeActiveTabTo(4);
Tab X = Tab("www", "c","v");
wind->closeTab();
Tab G = Tab("h", "tt","nnn");
wind->isEmpty();
Tab F = Tab("jj", "g","ccc");
wind->print();
Tab J = Tab("vvv", "ccc","fff");
wind->print();
Tab B = Tab("ww", "e","pp");
wind->moveActiveTabTo(5);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(2);
Tab I = Tab("ttt", "t","vv");
wind->print();
Tab O = Tab("ooo", "jj","t");
wind->isEmpty();
wind->moveActiveTabTo(5);
Tab N = Tab("bbb", "d","eee");
wind->getActiveTab();
wind->print();
wind->newTab(B);
Tab E = Tab("j", "iii","ww");
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->newTab(D);
wind->print();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->getActiveTab();
Tab S = Tab("qq", "sss","bb");
wind->changeActiveTabTo(2);
Tab Q = Tab("zzz", "sss","i");
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(2);
Tab M = Tab("w", "bb","qqq");
wind->changeActiveTabTo(0);
Tab C = Tab("dd", "xxx","bbb");
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->newTab(C);
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
Tab A = Tab("mmm", "uuu","xxx");
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->newTab(A);
wind->changeActiveTabTo(4);
wind->print();
wind->getActiveTab();
Tab Y = Tab("ll", "q","y");
wind->moveActiveTabTo(5);
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->newTab(E);
Tab L = Tab("o", "www","gg");
wind->newTab(F);
wind->isEmpty();
Tab T = Tab("ww", "ee","vv");
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->newTab(G);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->print();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->print();
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
delete wind;
}
	return 0;
};