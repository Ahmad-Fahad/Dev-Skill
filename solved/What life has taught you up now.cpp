#include<bits/stdc++.h>
using namespace std;
int main()
{
    string answer = "How well you prepare for any exam still you can do disaster in exam during exam period. Good preparation for exam actually maximize the possibility to do well in exam but this is not the only deciding factor. We need to take proper rest before exam, need to keep clam during exam period.Don’t judge anyone by his/her looks. People seems to be nice by look aren’t that good at all and also there are people who looks very serious in their appearance are actually most funniest people.Time is the best healing medicine for any heartbreaking situation.Life is not too hard or too easy. Actually its totally up to us how we want to live our life.Listen older people’s life experience but always take decision by your knowledge and heart.There will be some people who will hate you for no reason and also there will be some people who will love you for no reason. Try to accept both.Health is more important than money.Nothing in this world can buy time. If we aren’t enjoying our now , we will never going to enjoy our future.Always respect older people and people from opposite gender.";
    int pointCount = 0;
    int length = answer.length();
    for(int i=0; i<length; i++) {
        if(answer[i] == '.') {
            pointCount++;
        }
    }
    printf("%d\n", pointCount);
    return 0;
}
