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
Tab A = Tab("ttt", "a","a");
Tab B = Tab("sss", "j","y");
Tab C = Tab("fff", "bbb","v");
Tab D = Tab("ddd", "zz","mm");
Tab E = Tab("xx", "l","n");
Tab F = Tab("ttt", "p","zzz");
Tab G = Tab("k", "mm","rrr");
Tab H = Tab("b", "t","kk");
Tab I = Tab("hh", "xx","q");
Tab J = Tab("iii", "nnn","uuu");
Tab K = Tab("bbb", "g","qqq");
Tab L = Tab("vv", "ii","rr");
Tab M = Tab("vv", "w","yy");
Tab N = Tab("l", "z","rr");
Tab O = Tab("yyy", "k","j");
Tab P = Tab("p", "www","ww");
Tab Q = Tab("fff", "nnn","ss");
Tab R = Tab("h", "n","w");
Tab S = Tab("a", "kkk","pp");
Tab T = Tab("yyy", "nnn","x");
Tab U = Tab("hh", "aaa","hh");
Tab V = Tab("d", "s","jjj");
Tab W = Tab("vv", "uu","pp");
Tab X = Tab("sss", "h","u");
Tab Y = Tab("j", "ww","yy");
Tab Z = Tab("tt", "g","vvv");
a.newTab(A);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(B);
b.changeActiveTabTo(0);
c.newTab(C);
d.changeActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(D);
d.changeActiveTabTo(2);
a.newTab(E);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.newTab(F);
a.newTab(G);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(H);
a.moveActiveTabTo(2);
b.newTab(I);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(J);
a.moveActiveTabTo(1);
b.newTab(K);
c.moveActiveTabTo(1);
d.newTab(L);
a.moveActiveTabTo(2);
b.newTab(M);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(N);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(O);
b.newTab(P);
c.newTab(Q);
d.newTab(R);
a.newTab(S);
b.changeActiveTabTo(2);
c.newTab(T);
d.moveActiveTabTo(2);
a.newTab(U);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(V);
a.newTab(W);
b.newTab(X);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.newTab(Y);
b.newTab(Z);
c.newTab(Z);
d.changeActiveTabTo(4);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
d.changeActiveTabTo(1);
c.moveActiveTabTo(0);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
a.moveActiveTabTo(5);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
d.moveActiveTabTo(4);
c.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(4);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->print();
brows->closeEmptyWindows();
brows->getWindow(7);
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->getWindow(4);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->getWindow(7);
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(3);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(6);
brows->closeWindow();
brows->getWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->newWindow();
brows->switchToWindow(6);
brows->print();
brows->switchToWindow(4);
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->print();
brows->switchToWindow(9);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->getWindow(0);
brows->getWindow(1);
brows->print();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->getWindow(1);
brows->getWindow(3);
brows->newWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeWindow();
brows->getWindow(5);
brows->getWindow(5);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(4);
brows->newWindow();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(3);
brows->getWindow(2);
brows->mergeAllWindows();
brows->getWindow(9);
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(9);
brows->closeWindow();
delete brows;
}
	return 0;
};