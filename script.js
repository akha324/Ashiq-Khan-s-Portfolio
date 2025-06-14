console.log("About section slider script loaded");

let currentAboutSlide = 0;
const aboutSlides = document.querySelectorAll(".about-slide");
const aboutDots = document.querySelectorAll(".about-dots .dot");

function updateAboutSlider() {
  // Hide all slides
  aboutSlides.forEach((slide) => {
    slide.classList.remove("active");
  });

  // Deactivate all dots
  aboutDots.forEach((dot) => {
    dot.classList.remove("active");
  });

  // Show the current slide and activate corresponding dot
  aboutSlides[currentAboutSlide].classList.add("active");
  aboutDots[currentAboutSlide].classList.add("active");
}

function moveAbout(direction) {
  currentAboutSlide += direction;

  if (currentAboutSlide < 0) {
    currentAboutSlide = aboutSlides.length - 1;
  } else if (currentAboutSlide >= aboutSlides.length) {
    currentAboutSlide = 0;
  }

  updateAboutSlider();
}

function goAbout(index) {
  currentAboutSlide = index;
  updateAboutSlider();
}
