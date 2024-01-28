/*#include <Geode/Geode.hpp>
#include <Geode/modify/SetupCameraModePopup.hpp>

using namespace geode::prelude;

class $modify(SetupCameraModePopup) {
	bool init(EffectGameObject* p0, cocos2d::CCArray* p1)
	{
		if (!SetupCameraModePopup::init(p0, p1))
			return false;

		return true;

		auto layer = as<CCLayer*>(this->getChildren()->objectAtIndex(0));

		as<CCNode*>(layer->getChildren()->objectAtIndex(0))->setContentSize(ccp(360, 210));

		auto menu = as<CCMenu*>(layer->getChildren()->objectAtIndex(1));

		//ok btn
		as<CCNode*>(menu->getChildren()->objectAtIndex(0))->setPositionY(34);
		as<CCNode*>(this->getChildren()->objectAtIndex(1))->setPositionY(CCDirector::get()->getWinSize().height / 2 + 90);

		//middle btns
		as<CCNode*>(menu->getChildren()->objectAtIndex(2))->setPositionY(CCDirector::get()->getWinSize().height / 2 - menu->getPositionY() + 30);
		as<CCNode*>(menu->getChildren()->objectAtIndex(3))->setPositionY(CCDirector::get()->getWinSize().height / 2 - menu->getPositionY() + 30);

		//info btn
		as<CCNode*>(menu->getChildren()->objectAtIndex(1))->setPosition(ccp(-163, 203));
		//disable gridsnap
		as<CCNode*>(menu->getChildren()->objectAtIndex(4))->setPosition(ccp(105, 202));

		//spawn trigger
		as<CCNode*>(menu->getChildren()->objectAtIndex(6))->setPosition(ccp(-163, 32));
		//touch trigger
		as<CCNode*>(menu->getChildren()->objectAtIndex(5))->setPosition(ccp(-90, 32));
		//spawn trigger
		as<CCNode*>(menu->getChildren()->objectAtIndex(7))->setPosition(ccp(110, 32));

		//middle texts
		as<CCNode*>(layer->getChildren()->objectAtIndex(2))->setPositionY(130 + menu->getPositionY());
		as<CCNode*>(layer->getChildren()->objectAtIndex(3))->setPositionY(130 + menu->getPositionY());

		//disable gridsnap text
		as<CCNode*>(layer->getChildren()->objectAtIndex(4))->setPosition(ccp(403, 246));

		//touch trigger text
		as<CCNode*>(layer->getChildren()->objectAtIndex(9))->setPosition(ccp(209, 76));
		as<CCNode*>(layer->getChildren()->objectAtIndex(9))->setScale(0.275f);
		//spawn trigger text
		as<CCNode*>(layer->getChildren()->objectAtIndex(10))->setPosition(ccp(135, 76));
		as<CCNode*>(layer->getChildren()->objectAtIndex(10))->setScale(0.275f);

		return true;
	}
};
*/