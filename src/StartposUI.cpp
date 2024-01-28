#include <Geode/Geode.hpp>
#include <Geode/modify/LevelSettingsLayer.hpp>

using namespace geode::prelude;

class $modify(LevelSettingsLayer) {
	bool init(LevelSettingsObject* p0, LevelEditorLayer* p1)
	{
		if (!LevelSettingsLayer::init(p0, p1))
			return false;

		auto layer = as<CCLayer*>(this->getChildren()->objectAtIndex(0));
		bool isStartpos = false;

		CCObject* node = nullptr;

		CCARRAY_FOREACH(layer->getChildren(), node)
		{
			if (typeinfo_cast<CCLabelBMFont*>(node))
			{
				if (static_cast<std::string>(as<CCLabelBMFont*>(node)->getString()).starts_with("Disable"))
				{
					isStartpos = true;
				}
			}
		}

		if (isStartpos)
		{
			log::info("startpos");

			as<CCNode*>(layer->getChildren()->objectAtIndex(0))->setContentSize(ccp(360, 210));

			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(0))->setPositionY(-100 + 20);

			//mode btn
			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(4))->setPosition(ccp(0, 70 - 10));
			//speed btn
			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(3))->setPosition(ccp(-90, 70 - 10));
			//speed btn
			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(5))->setPosition(ccp(90, 70 - 10));

			//disable btn
			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(1))->setPosition(ccp(140, -100 + 20));

			//camera btn
			as<CCNode*>(as<CCMenu*>(layer->getChildren()->objectAtIndex(1))->getChildren()->objectAtIndex(2))->setPosition(ccp(-155, -100 + 20));

			//texts

			//disable text
			as<CCNode*>(layer->getChildren()->objectAtIndex(2))->setPosition(CCDirector::get()->getWinSize() / 2 + ccp(140, -100 + 20 + 25));
			//reset text
			as<CCNode*>(layer->getChildren()->objectAtIndex(3))->setPosition(CCDirector::get()->getWinSize() / 2 + ccp(-155 + 20, -100 + 20));

			//speed text
			as<CCNode*>(layer->getChildren()->objectAtIndex(10))->setPosition(CCDirector::get()->getWinSize() / 2 + ccp(-90, 70 - 15 + 35));
			//mode text
			as<CCNode*>(layer->getChildren()->objectAtIndex(11))->setPosition(CCDirector::get()->getWinSize() / 2 + ccp(0, 70 - 15 + 35));
			//options text
			as<CCNode*>(layer->getChildren()->objectAtIndex(12))->setPosition(CCDirector::get()->getWinSize() / 2 + ccp(90, 70 - 15 + 35));

			//input y's
			as<CCNode*>(layer->getChildren()->objectAtIndex(6))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15);
			as<CCNode*>(layer->getChildren()->objectAtIndex(6))->setContentSize(ccp(90, 30));
			as<CCNode*>(layer->getChildren()->objectAtIndex(9))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15);
			as<CCNode*>(layer->getChildren()->objectAtIndex(9))->setContentSize(ccp(90, 30));

			as<CCNode*>(layer->getChildren()->objectAtIndex(6 - 1))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15);
			as<CCNode*>(layer->getChildren()->objectAtIndex(6 - 1))->setContentSize(ccp(90, 30));
			as<CCNode*>(layer->getChildren()->objectAtIndex(9 - 1))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15);
			as<CCNode*>(layer->getChildren()->objectAtIndex(9 - 1))->setContentSize(ccp(90, 30));

			as<CCNode*>(layer->getChildren()->objectAtIndex(6 - 2))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15 + 30);
			as<CCNode*>(layer->getChildren()->objectAtIndex(9 - 2))->setPositionY(CCDirector::get()->getWinSize().height / 2 - 15 + 30);
		}

		return true;
	}
};
