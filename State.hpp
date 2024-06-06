#pragma once

namespace Flappy
{
	class State
	{
	public:
		virtual void Init() = 0;
		
		virtual void HandleInout() = 0;
		virtual void Update() = 0;
		virtual void Draw(float dt) = 0;

		virtual void Pause() { }
		virtual void Resume() { }

	};

}

