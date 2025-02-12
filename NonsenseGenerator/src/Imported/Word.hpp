#ifndef 废话生成器_WORD_HPP
#define 废话生成器_WORD_HPP
#include "FinalLib.hpp"
#include "../CFunction/Func.h"
#include <random>
using namespace std;
static random_device Seed;
static mt19937 MT19937(Seed());
class Word :public ExtractAgent{
protected:
public:
    string Data() {
        auto WordLib = Information.Lib;
        uniform_int_distribution<int> rd(0, (int) WordLib.size() - 1);
        string result = WordLib.at(rd(MT19937));
        return result;
    }
    //============================================================================
    static Word &Cre(string&& Key,string&& Words){
        auto Build = [&](Word& WordInstance) -> void {
            WordInstance.Information.Key = Key;
            WordInstance.Information.Lib = lysis(Words,(char*)"|");
        };
        Word* WordType(new Word);
        Build(*WordType);
        FinalLib::Register(*WordType);
        return *WordType;
    };
    //============================================================================
};

static auto Say=(Word::Cre("/say","拷问|说|苦诉|大吼|扯着嗓子说|劝告|尖叫"));

static auto Head=(Word::Cre("/head","诚然|所以|因为|然而|而|即便如此|虽然|但是|一般理性而言|呃呃，我觉得你说的不对，因为|你是正确的，不过考虑到|如果提到这个，就不得不提到|你要是这么说的话，那话可就不能这么说了，我们应该考虑到|毋庸置疑的，这就是问题的关键|我跟你说个典故吧|我们应该考虑到|捏嘛的|我们不妨设想一下这么一种情况|其实|我觉得不一定,你是错误的|我已经说了很多遍了|天呐|我的意思是|是这样的|我个人认为|这些是我们应该考虑到的|难道你就没有考虑过这点|很不可思议吧|呃呃,可是以上观点我一个都不认可|你问为什么|可是你真觉得这句话是对的|这是好的，而且没有一点坏处难道|典中典,你这种人我见得多了|你真是愚蠢|我跟你说"));

static auto Media=(Word::Cre("/media","不仅|一边|既|也|就"));

static auto Para=(Word::Cre("/para","像|犹如|宛如|如同|不像"));

static auto Adj=(Word::Cre("/adj","绿色|旋转|美丽|百年|寒冷|永恒|烧毁|燃烧|死掉|碳色|活泼|静态|强大|弱小|沉底|腹鳍|冰冻|随机|高级|奢侈|肥胖|黄色|黑色|木制|铁质|纺织|正方形|圆形"));

static auto Noun=(Word::Cre("/noun","我|乌鸦|码头|马桶|钻井|盾构机|负二次方|电视|垃圾桶|手机|酸液|大蒜|窗户|太阳|水枪|山脉|头|地面|氧气|手|铜条|玻璃|马桶|纸巾|行星|神秘|面粉|杯子|风扇|线条|风暴|物流|系数|观点|攻击性|错误|沙发|客厅|家里|地底|太阳|下水道|二次元|你|成绩|壁纸|酒精|洗衣机盖|悲报|背包|清单""预备课程|圆周率|代码的执行原理|钙片|软木|药丸|心脏|梦|下北泽|阴间|小行星|这个|那个|办公室|老家|屁股|实验台|皮肤|手机|电脑|椅子|米桶|热水壶|鲁迅|亚里士多德|喜马拉雅山|图标|物理|化学|颜色|灯条|雪|头像|战争|地区|语言|猫咪|路由器|低位|电平|喜剧|夕阳|飞鸟|蝴蝶|baka|引擎|塑料|速度|水池|红眼果蝇|大肠杆菌|航天楼|八爪鱼|候车大厅|小鹰星云|草履虫|绿头蝇"));

static auto Verb=(Word::Cre("/verb","击打|空袭|称霸|踏破|掀翻|冰封|闪击|上|席卷|袭击|偷袭|爆破|打开|关闭|碎裂|碎裂|占领|语言攻击|冷暴力|堵塞|杀掉|进入|推出|退出|删掉|治疗|加热|烧烤|思考|记得|忘掉|清洗|轰炸|关掉|启动|拿起|驾驶|敲打|殴打|拷打|搬进|抽出|拿走|抬起|建造|点燃|安装|删除|读取|按下|旋转|扭动|抱起|粘上|盯着|张开|切开|踢掉|肘击|摊开|抹除|抹掉|蹭蹭|翘起|扭向|捏住|探望|吐向|解刨|否定|拒绝|肯定|张开嘴巴试图吃掉|希望|期盼"));

static auto Vebi=(Word::Cre("/vebi","抽搐|走路|死掉|卡机|排泄|自爆|发癫|害怕|思考|生存|活着|呼吸|睡觉|起飞|发疯|大哭|狂笑|狂笑|扭曲|分解|结合|融化|萎缩|膨胀|跳舞|生锈|氧化|游泳|嗯嗯了|自裁|中风|倾家荡产"));

static auto Degree=(Word::Cre("/degree","十分|很|究极|非常|十分甚至九分"));

static auto Adv1=(Word::Cre("/adv1","忘记|原地|不断|突然|进一步|逐渐|悄悄|把屁股翘起来|站在这里|还没睡醒就|将会被你引导|其实一点也不想|可能会|会|可能不会|不会|一定会|一定一定会|一定不会|一定一定不会|也许会|也许不会|肯定会"));

static auto Adv2=(Word::Cre("/adv2","无奈地|失望地|愤怒地|开心地|用力地|绝望地|懊恼地|心不在焉地|头也不回地"));

static auto Prep=(Word::Cre("/prep","中|里面|外面|上面|下面|内部"));

static auto Oper=(Word::Cre("/punc","。|，|！|？"));

#endif //废话生成器_WORD_HPP
