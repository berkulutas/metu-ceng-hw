#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab Z = Tab("g", "bbb","hhh");
wind->print();
Tab C = Tab("iii", "z","z");
wind->closeTab();
Tab P = Tab("h", "m","kkk");
wind->isEmpty();
Tab L = Tab("d", "hh","xxx");
wind->newTab(C);
Tab U = Tab("qq", "dd","ww");
wind->print();
wind->isEmpty();
Tab R = Tab("d", "uuu","ff");
wind->isEmpty();
Tab V = Tab("oo", "bb","j");
wind->isEmpty();
Tab I = Tab("w", "v","rr");
wind->newTab(I);
Tab A = Tab("f", "qqq","k");
wind->moveActiveTabTo(1);
Tab X = Tab("ee", "tt","k");
wind->newTab(A);
wind->getActiveTab();
Tab F = Tab("nnn", "j","www");
wind->newTab(F);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
Tab O = Tab("u", "ddd","uuu");
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->closeTab();
Tab G = Tab("uuu", "vvv","y");
wind->newTab(G);
wind->closeTab();
Tab B = Tab("h", "jj","bb");
wind->newTab(B);
wind->newTab(L);
Tab H = Tab("f", "z","zz");
wind->newTab(H);
Tab E = Tab("mmm", "kkk","oo");
wind->isEmpty();
wind->closeTab();
Tab Q = Tab("mm", "kk","a");
wind->newTab(E);
wind->isEmpty();
wind->print();
Tab S = Tab("aaa", "ppp","bb");
wind->closeTab();
wind->newTab(O);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(1);
Tab N = Tab("tt", "z","qq");
wind->getActiveTab();
Tab K = Tab("tt", "aa","b");
wind->changeActiveTabTo(2);
wind->print();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(0);
wind->newTab(K);
wind->changeActiveTabTo(3);
wind->isEmpty();
Tab T = Tab("p", "jj","l");
wind->isEmpty();
Tab W = Tab("xxx", "k","z");
wind->moveActiveTabTo(4);
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->print();
wind->print();
Tab J = Tab("bbb", "mmm","b");
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->print();
wind->moveActiveTabTo(1);
Tab D = Tab("gg", "ooo","ff");
wind->closeTab();
Tab Y = Tab("z", "jjj","qq");
wind->closeTab();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->newTab(D);
wind->isEmpty();
wind->isEmpty();
Tab M = Tab("ooo", "p","dd");
wind->closeTab();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->print();
wind->newTab(J);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->print();
delete wind;
}
	return 0;
};