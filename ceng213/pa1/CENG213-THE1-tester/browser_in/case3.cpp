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
Tab A = Tab("hh", "ii","w");
Tab B = Tab("h", "v","h");
Tab C = Tab("p", "e","vvv");
Tab D = Tab("rrr", "ee","x");
Tab E = Tab("zz", "x","gg");
Tab F = Tab("jjj", "l","rr");
Tab G = Tab("vvv", "sss","r");
Tab H = Tab("qq", "ww","ff");
Tab I = Tab("m", "ff","bbb");
Tab J = Tab("jj", "ww","yyy");
Tab K = Tab("c", "ii","x");
Tab L = Tab("ll", "ww","g");
Tab M = Tab("m", "dd","h");
Tab N = Tab("l", "j","j");
Tab O = Tab("q", "t","oo");
Tab P = Tab("w", "xx","ff");
Tab Q = Tab("z", "fff","nnn");
Tab R = Tab("lll", "eee","b");
Tab S = Tab("ccc", "h","lll");
Tab T = Tab("g", "gg","hhh");
Tab U = Tab("oo", "kkk","ccc");
Tab V = Tab("rrr", "z","aa");
Tab W = Tab("bb", "bb","u");
Tab X = Tab("kk", "j","bb");
Tab Y = Tab("kk", "hhh","jj");
Tab Z = Tab("mmm", "yy","a");
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.newTab(A);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(5);
b.newTab(B);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(C);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.newTab(D);
d.moveActiveTabTo(0);
a.newTab(E);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(2);
b.newTab(F);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(G);
d.changeActiveTabTo(1);
a.newTab(H);
b.newTab(I);
c.moveActiveTabTo(3);
d.newTab(J);
a.newTab(K);
b.moveActiveTabTo(0);
c.newTab(L);
d.moveActiveTabTo(0);
a.newTab(M);
b.newTab(N);
c.newTab(O);
d.newTab(P);
a.newTab(Q);
b.newTab(R);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(S);
b.newTab(T);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(U);
b.newTab(V);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.newTab(W);
b.newTab(X);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.newTab(Y);
c.moveActiveTabTo(2);
d.newTab(Z);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
d.changeActiveTabTo(5);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.changeActiveTabTo(5);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(8);
brows->closeWindow();
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->print();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(6);
brows->getWindow(3);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->switchToWindow(4);
brows->switchToWindow(6);
brows->print();
brows->newWindow();
brows->closeWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->switchToWindow(8);
brows->print();
brows->switchToWindow(4);
brows->newWindow();
brows->getWindow(3);
brows->closeWindow();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->switchToWindow(9);
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(7);
brows->closeWindow();
brows->getWindow(6);
brows->switchToWindow(1);
brows->getWindow(2);
brows->closeEmptyWindows();
brows->switchToWindow(4);
brows->newWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(4);
brows->print();
brows->closeWindow();
brows->switchToWindow(0);
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(0);
brows->switchToWindow(2);
brows->newWindow();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->newWindow();
brows->getWindow(5);
brows->getWindow(8);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->print();
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
delete brows;
}
	return 0;
};