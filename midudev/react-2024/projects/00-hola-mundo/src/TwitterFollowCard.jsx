import { useState } from "react";

export function TwitterFollowCard({ userName = "unknown", name = "unknown", initialIsFollowing }) {
	const [isFollowing, setIsFollowing] = useState(initialIsFollowing);
	const text = isFollowing ? "Siguiendo" : "Seguir";
	const buttonClassName = isFollowing ? "is-following" : "";

	const handleClick = () => {
		setIsFollowing((prev) => !prev);
	};

	return (
		<article className="tw-followCard">
			<header className="tw-followCard-header">
				<img
					src={`https://unavatar.io/${userName}`}
					alt={name}
					className="tw-followCard-avatar"
				/>
				<div className="tw-followCard-info">
					<strong>{name}</strong>
					<span className="tw-followCard-infoUserName">@{userName}</span>
				</div>
			</header>
			<aside>
				<button
					type="button"
					onClick={handleClick}
					className={`tw-followCard-button ${buttonClassName}`}
				>
					{text}
				</button>
			</aside>
		</article>
	);
}
