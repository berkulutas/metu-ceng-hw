#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("y", "iii","k");
Tab B = Tab("k", "i","jjj");
Tab C = Tab("zzz", "t","cc");
Tab D = Tab("tt", "qq","p");
Tab E = Tab("lll", "iii","ooo");
Tab F = Tab("rrr", "rrr","x");
Tab G = Tab("xx", "o","rrr");
Tab H = Tab("vv", "v","b");
Tab I = Tab("aaa", "bbb","ee");
Tab J = Tab("eee", "n","ccc");
Tab K = Tab("y", "rrr","z");
Tab L = Tab("hh", "d","rr");
Tab M = Tab("gg", "z","jjj");
Tab N = Tab("u", "eee","z");
Tab O = Tab("yy", "q","f");
Tab P = Tab("m", "o","ooo");
Tab Q = Tab("ddd", "y","sss");
Tab R = Tab("z", "l","oo");
Tab S = Tab("zzz", "zzz","oo");
Tab T = Tab("ooo", "n","b");
Tab U = Tab("l", "u","v");
Tab V = Tab("gg", "r","aa");
Tab W = Tab("sss", "e","j");
Tab X = Tab("mm", "y","jj");
Tab Y = Tab("rrr", "v","fff");
Tab Z = Tab("j", "kkk","ss");
a.newTab(A);
b.newTab(B);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(C);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.newTab(D);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(5);
b.newTab(E);
c.newTab(F);
d.newTab(G);
a.newTab(H);
b.newTab(I);
c.newTab(J);
d.changeActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(K);
a.changeActiveTabTo(4);
b.newTab(L);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(M);
b.newTab(N);
c.newTab(O);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(P);
d.newTab(Q);
a.newTab(R);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.newTab(S);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(T);
b.moveActiveTabTo(2);
c.newTab(U);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.newTab(V);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(W);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.newTab(X);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(Y);
d.newTab(Z);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(2);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
d.changeActiveTabTo(4);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->getWindow(0);
brows->switchToWindow(2);
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(3);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->getWindow(4);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->getWindow(7);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->print();
brows->closeEmptyWindows();
brows->getWindow(6);
brows->switchToWindow(8);
brows->print();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->getWindow(7);
brows->print();
brows->print();
brows->getWindow(9);
brows->switchToWindow(8);
brows->mergeAllWindows();
brows->print();
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(6);
brows->switchToWindow(5);
brows->closeWindow();
brows->print();
brows->getWindow(8);
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->print();
brows->print();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->print();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(1);
brows->closeWindow();
brows->switchToWindow(9);
brows->switchToWindow(0);
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(8);
brows->print();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
delete brows;
}
	return 0;
};