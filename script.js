console.log("Slider script loaded");

let currentAboutSlide = 0;

function updateAboutSlider() {
  const aboutSlides = document.querySelectorAll(".about-slide");
  const aboutDots = document.querySelectorAll(".about-dots .dot");

  aboutSlides.forEach((slide, i) => {
    slide.classList.toggle("active", i === currentAboutSlide);
  });

  aboutDots.forEach((dot, i) => {
    dot.classList.toggle("active", i === currentAboutSlide);
  });
}

function moveAbout(direction) {
  const totalSlides = document.querySelectorAll(".about-slide").length;
  currentAboutSlide = (currentAboutSlide + direction + totalSlides) % totalSlides;
  updateAboutSlider();
}

function goAbout(index) {
  currentAboutSlide = index;
  updateAboutSlider();
}

let currentPortfolioSlide = 0;

function updatePortfolioSlider() {
  const portfolioSlides = document.querySelectorAll(".portfolio-slide");
  const portfolioDots = document.querySelectorAll(".portfolio-dots .dot");

  portfolioSlides.forEach((slide, i) => {
    slide.classList.toggle("active", i === currentPortfolioSlide);
  });

  if (portfolioDots.length) {
    portfolioDots.forEach((dot, i) => {
      dot.classList.toggle("active", i === currentPortfolioSlide);
    });
  }
}

function movePortfolio(direction) {
  const total = document.querySelectorAll(".portfolio-slide").length;
  currentPortfolioSlide = (currentPortfolioSlide + direction + total) % total;
  updatePortfolioSlider();
}

function goPortfolio(index) {
  currentPortfolioSlide = index;
  updatePortfolioSlider();
}

document.addEventListener("DOMContentLoaded", () => {
  updateAboutSlider();
  updatePortfolioSlider();

  document.addEventListener("keydown", (e) => {
    if (e.key === "ArrowLeft") moveAbout(-1);
    if (e.key === "ArrowRight") moveAbout(1);
  });
});

function goAbout(index) {
  currentAboutSlide = index;
  updateAboutSlider();
}
