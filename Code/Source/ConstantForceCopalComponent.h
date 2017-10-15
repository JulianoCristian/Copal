#pragma once
#include "StdAfx.h"
#include "ForceBaseComponent.h"
namespace Copal
{
	class ConstantForceComponent
		: public Copal::ForceBaseComponent
	{
		public:
			AZ_COMPONENT(ConstantForceComponent, "{4CB90E17-DE88-4166-90BC-70D428D8F077}");

			// Required Reflect function.
			static void Reflect(AZ::ReflectContext* context);

			void OnPostPhysicsUpdate() override;

			bool GetForceEnabled() { return ForceEnabled; }
			void SetForceEnabled(bool e) { ForceEnabled = e; }

			AZ::Vector3 GetForceVector() { return ForceVector; }
			void SetForceVector(AZ::Vector3 v) { ForceVector = v; }

			AZ::EntityId GetAttachedEntity() { return AttachedEntity; }


		protected:
			AZStd::string ForceName;
			AZStd::string ForceTag;

			AZ::EntityId AttachedEntity;

			bool ForceEnabled = false;
			AZ::Vector3 ForceVector = AZ::Vector3(0, 0, 0);

	};
}
