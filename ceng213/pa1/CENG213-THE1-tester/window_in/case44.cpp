#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->print();
Tab I = Tab("vvv", "ii","zzz");
wind->getActiveTab();
Tab C = Tab("y", "uuu","xx");
wind->getActiveTab();
Tab N = Tab("tt", "vv","u");
wind->newTab(C);
Tab B = Tab("kk", "e","eee");
wind->closeTab();
Tab M = Tab("kk", "uuu","jjj");
wind->print();
Tab K = Tab("m", "f","q");
wind->getActiveTab();
wind->closeTab();
Tab A = Tab("bb", "g","oo");
wind->getActiveTab();
Tab V = Tab("bbb", "x","w");
wind->newTab(A);
wind->print();
Tab P = Tab("v", "o","r");
wind->newTab(B);
Tab E = Tab("yy", "nnn","k");
wind->newTab(E);
Tab Y = Tab("kkk", "vv","iii");
wind->closeTab();
wind->newTab(I);
wind->print();
Tab W = Tab("ttt", "aa","v");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->isEmpty();
Tab S = Tab("rr", "hh","jj");
wind->closeTab();
Tab Q = Tab("www", "qq","ee");
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(0);
Tab H = Tab("w", "o","kkk");
wind->getActiveTab();
Tab U = Tab("sss", "jj","mm");
wind->changeActiveTabTo(4);
wind->closeTab();
Tab D = Tab("ccc", "zz","qq");
wind->closeTab();
wind->closeTab();
Tab Z = Tab("ll", "ee","b");
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->closeTab();
Tab X = Tab("ll", "v","aaa");
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(3);
wind->closeTab();
Tab J = Tab("ss", "tt","m");
wind->changeActiveTabTo(0);
Tab F = Tab("ss", "fff","nnn");
wind->print();
Tab L = Tab("tt", "r","j");
wind->moveActiveTabTo(0);
Tab T = Tab("ee", "qqq","mmm");
wind->moveActiveTabTo(3);
wind->closeTab();
wind->print();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
Tab R = Tab("uu", "bbb","kk");
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(0);
wind->print();
wind->closeTab();
wind->newTab(D);
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->print();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->newTab(F);
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(5);
wind->print();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->newTab(H);
Tab G = Tab("hh", "fff","a");
wind->newTab(G);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(0);
wind->print();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(5);
wind->closeTab();
Tab O = Tab("h", "e","q");
wind->closeTab();
wind->getActiveTab();
wind->newTab(J);
wind->moveActiveTabTo(4);
delete wind;
}
	return 0;
};